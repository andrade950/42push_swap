/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:32:47 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/24 11:21:51 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	sort_b_until_three(t_node **stack_a, t_node **stack_b)
{
	int		i;
	t_node	*temp;

	while (stack_size(*stack_a) > 3 && !is_sorted(*stack_a))
	{
		temp = *stack_a;
		i = rotate_type_ab(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == case_rarb(*stack_a, *stack_b, temp->value))
				i = apply_rarb(stack_a, stack_b, temp->value, 'a');
			else if (i == case_rrarrb(*stack_a, *stack_b, temp->value))
				i = apply_rrarrb(stack_a, stack_b, temp->value, 'a');
			else if (i == case_rarrb(*stack_a, *stack_b, temp->value))
				i = apply_rarrb(stack_a, stack_b, temp->value, 'a');
			else if (i == case_rrarb(*stack_a, *stack_b, temp->value))
				i = apply_rrarb(stack_a, stack_b, temp->value, 'a');
			else
				temp = temp->next;
		}
	}
}

t_node	*sort_b(t_node **stack_a)
{
	t_node	*stack_b;

	stack_b = NULL;
	if (stack_size(*stack_a) > 3 && !is_sorted(*stack_a))
		pb(stack_a, &stack_b);
	if (stack_size(*stack_a) > 3 && !is_sorted(*stack_a))
		pb(stack_a, &stack_b);
	if (stack_size(*stack_a) > 3 && !is_sorted(*stack_a))
		sort_b_until_three(stack_a, &stack_b);
	if (!is_sorted(*stack_a))
		sort_three(stack_a);
	return (stack_b);
}

t_node	**sort_a(t_node **stack_a, t_node **stack_b)
{
	int		i;
	t_node	*temp;

	while (*stack_b)
	{
		temp = *stack_b;
		i = rotate_type_ba(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == case_rarb_a(*stack_a, *stack_b, temp->value))
				i = apply_rarb(stack_a, stack_b, temp->value, 'b');
			else if (i == case_rarrb_a(*stack_a, *stack_b, temp->value))
				i = apply_rarrb(stack_a, stack_b, temp->value, 'b');
			else if (i == case_rrarrb_a(*stack_a, *stack_b, temp->value))
				i = apply_rrarrb(stack_a, stack_b, temp->value, 'b');
			else if (i == case_rrarb_a(*stack_a, *stack_b, temp->value))
				i = apply_rrarb(stack_a, stack_b, temp->value, 'b');
			else
				temp = temp->next;
		}
	}
	return (stack_a);
}
