/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:41:34 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/24 12:19:44 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	choose_algorithm(t_node **stack_a, t_node **stack_b, int size)
{
	if (size > 5)
		turk_sort(stack_a);
	else if (size == 2)
		sa(stack_a, 0);
	else if (size == 3)
		sort_three(stack_a);
	else if (size == 4 || size == 5)
		sort_ff(stack_a, stack_b, stack_size(*stack_a));
}

void	sort_three(t_node **stack_a)
{
	int	a;
	int	b;
	int	c;

	a = (*stack_a)->value;
	b = (*stack_a)->next->value;
	c = (*stack_a)->next->next->value;
	if (a > b && b < c && a < c)
		sa(stack_a, 0);
	else if (a > b && b > c)
	{
		sa(stack_a, 0);
		rra(stack_a, 0);
	}
	else if (a > b && b < c && a > c)
		ra(stack_a, 0);
	else if (a < b && b > c && a < c)
	{
		sa(stack_a, 0);
		ra(stack_a, 0);
	}
	else if (a < b && b > c && a > c)
		rra(stack_a, 0);
}

void	sort_ff(t_node **stack_a, t_node **stack_b, int size)
{
	int	min_index;

	while (size > 3)
	{
		min_index = get_min_index(*stack_a);
		bring_to_top(stack_a, min_index, size);
		pb(stack_a, stack_b);
		size--;
	}
	sort_three(stack_a);
	while (*stack_b)
		pa(stack_a, stack_b);
}

void	turk_sort(t_node **stack_a)
{
	t_node	*stack_b;
	int		i;

	stack_b = NULL;
	stack_b = sort_b(stack_a);
	stack_a = sort_a(stack_a, &stack_b);
	i = find_index(*stack_a, find_min(*stack_a));
	if (i < stack_size(*stack_a) - i)
	{
		while ((*stack_a)->value != find_min(*stack_a))
			ra(stack_a, 0);
	}
	else
	{
		while ((*stack_a)->value != find_min(*stack_a))
			rra(stack_a, 0);
	}
}
