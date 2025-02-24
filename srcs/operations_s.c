/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:49:10 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/24 11:15:22 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	sa(t_node **stack_a, int n)
{
	t_node	*first;
	t_node	*second;

	if (!(*stack_a) || !((*stack_a)->next))
		return ;
	first = *stack_a;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack_a = second;
	if (n != 1)
		ft_printf("sa\n");
}

void	sb(t_node **stack_b, int n)
{
	t_node	*first;
	t_node	*second;

	if (!(*stack_b) || !((*stack_b)->next))
		return ;
	first = *stack_b;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack_b = second;
	if (n != 1)
		ft_printf("sb\n");
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	sa(stack_a, 1);
	sb(stack_b, 1);
	ft_printf("ss\n");
}
