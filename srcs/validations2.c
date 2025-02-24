/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:55:28 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/24 11:22:03 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_range(const char *str)
{
	long	value;

	value = ft_atol(str);
	if (value < INT_MIN || value > INT_MAX)
		return (0);
	return (1);
}

int	validate_range(char **args)
{
	int	i;

	i = 0;
	while (args[i])
	{
		if (!ft_range(args[i]))
			return (0);
		i++;
	}
	return (1);
}

int	validate_args(char **args)
{
	int	i;

	i = 0;
	while (args[i])
	{
		if (!is_number(args[i]) || !ft_range(args[i]))
			return (0);
		i++;
	}
	return (!check_duplicates(args));
}
