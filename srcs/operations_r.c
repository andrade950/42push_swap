/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_r.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:48:18 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/24 11:14:24 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ra(t_node **stack_a, int n)
{
	t_node	*first;
	t_node	*current;

	if (!(*stack_a) || !((*stack_a)->next))
		return ;
	first = *stack_a;
	*stack_a = (*stack_a)->next;
	first->next = NULL;
	current = *stack_a;
	while (current->next)
		current = current->next;
	current->next = first;
	if (n != 1)
		ft_printf("ra\n");
}

void	rb(t_node **stack_b, int n)
{
	t_node	*first;
	t_node	*current;

	if (!(*stack_b) || !((*stack_b)->next))
		return ;
	first = *stack_b;
	*stack_b = (*stack_b)->next;
	first->next = NULL;
	current = *stack_b;
	while (current->next)
		current = current->next;
	current->next = first;
	if (n != 1)
		ft_printf("rb\n");
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	ra(stack_a, 1);
	rb(stack_b, 1);
	ft_printf("rr\n");
}
