/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finds.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:02:00 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/24 11:11:11 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	find_min(t_node *a)
{
	int		i;

	i = a->value;
	while (a)
	{
		if (a->value < i)
			i = a->value;
		a = a->next;
	}
	return (i);
}

int	find_max(t_node *a)
{
	int	i;

	i = a->value;
	while (a)
	{
		if (a->value > i)
			i = a->value;
		a = a->next;
	}
	return (i);
}

int	find_place_a(t_node *stack_a, int v_push)
{
	int		i;
	t_node	*temp;

	i = 1;
	if (v_push < stack_a->value && v_push > lstlast(stack_a)->value)
		i = 0;
	else if (v_push > find_max(stack_a) || v_push < find_min(stack_a))
		i = find_index(stack_a, find_min(stack_a));
	else
	{
		temp = stack_a->next;
		while (stack_a->value > v_push || temp->value < v_push)
		{
			stack_a = stack_a->next;
			temp = stack_a->next;
			i++;
		}
	}
	return (i);
}

int	find_place_b(t_node *stack_b, int v_push)
{
	int		i;
	t_node	*temp;

	i = 1;
	if (v_push > stack_b->value && v_push < lstlast(stack_b)->value)
		i = 0;
	else if (v_push > find_max(stack_b) || v_push < find_min(stack_b))
		i = find_index(stack_b, find_max(stack_b));
	else
	{
		temp = stack_b->next;
		while (stack_b->value < v_push || temp->value > v_push)
		{
			stack_b = stack_b->next;
			temp = stack_b->next;
			i++;
		}
	}
	return (i);
}
