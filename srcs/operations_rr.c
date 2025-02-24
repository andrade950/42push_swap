/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:48:18 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/24 11:14:15 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	rra(t_node **stack_a, int n)
{
	t_node	*prev;
	t_node	*last;

	if (!(*stack_a) || !((*stack_a)->next))
		return ;
	prev = NULL;
	last = *stack_a;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *stack_a;
	*stack_a = last;
	if (n != 1)
		ft_printf("rra\n");
}

void	rrb(t_node **stack_b, int n)
{
	t_node	*prev;
	t_node	*last;

	if (!(*stack_b) || !((*stack_b)->next))
		return ;
	prev = NULL;
	last = *stack_b;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *stack_b;
	*stack_b = last;
	if (n != 1)
		ft_printf("rrb\n");
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	rra(stack_a, 1);
	rrb(stack_b, 1);
	ft_printf("rrr\n");
}
