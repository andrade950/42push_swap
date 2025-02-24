/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:07:13 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/24 11:11:53 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_node	*get_next_min(t_node **stack)
{
	t_node	*head;
	t_node	*min;
	int		has_min;

	min = NULL;
	has_min = 0;
	head = *stack;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1) && (!has_min || head->value < min->value))
			{
				min = head;
				has_min = 1;
			}
			head = head->next;
		}
	}
	return (min);
}

void	init_index(t_node **stack)
{
	t_node	*head;
	int		index;

	head = *stack;
	while (head)
	{
		head->index = -1;
		head = head->next;
	}
	index = 0;
	head = get_next_min(stack);
	while (head)
	{
		head->index = index++;
		head = get_next_min(stack);
	}
}

int	find_index(t_node *a, int value)
{
	int	i;

	i = 0;
	while (a->value != value)
	{
		i++;
		a = a->next;
	}
	a->index = 0;
	return (i);
}

int	get_min_index(t_node *stack)
{
	int	min_value;
	int	min_index;
	int	i;

	min_value = stack->value;
	min_index = 0;
	i = 0;
	while (stack)
	{
		if (stack->value < min_value)
		{
			min_value = stack->value;
			min_index = i;
		}
		stack = stack->next;
		i++;
	}
	return (min_index);
}
