/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:47:15 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/24 11:13:07 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	add_to_stack(t_node **stack, int value)
{
	t_node	*new_node;
	t_node	*current;

	new_node = create_node(value);
	if (!new_node)
		return ;
	if (*stack == NULL)
		*stack = new_node;
	else
	{
		current = *stack;
		while (current->next)
			current = current->next;
		current->next = new_node;
	}
}

void	create_stack(t_node **stack, char **args)
{
	int	i;

	i = 0;
	while (args[i])
	{
		add_to_stack(stack, ft_atoi(args[i]));
		i++;
	}
}

int	stack_size(t_node *stack)
{
	int	size;

	size = 0;
	while (stack)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}
