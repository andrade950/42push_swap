/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:55:43 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/24 12:19:18 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	bring_to_top(t_node **stack, int index, int size)
{
	if (index <= size / 2)
	{
		while (index-- > 0)
			ra(stack, 0);
	}
	else
	{
		while (index++ < size)
			rra(stack, 0);
	}
}

long	ft_atol(const char *str)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

void	move_min_to_top(t_node **stack)
{
	t_node	*head;
	int		min_value;
	int		min_index;
	int		i;
	int		size;

	min_value = INT_MAX;
	min_index = 0;
	i = 0;
	size = stack_size(*stack);
	head = *stack;
	while (head)
	{
		if (head->value < min_value)
		{
			min_value = head->value;
			min_index = i;
		}
		head = head->next;
		i++;
	}
	move_min_to_top2(min_index, size, stack);
}

void	move_min_to_top2(int min_index, int size, t_node **stack)
{
	if (min_index <= size / 2)
		while (min_index-- > 0)
			ra(stack, 0);
	else
	{
		min_index = size - min_index;
		while (min_index-- > 0)
			rra(stack, 1);
	}
}

int	error(char	**args)
{
	if (!validate_args(args))
	{
		ft_printf("Error\n");
		return (1);
	}
	return (0);
}
