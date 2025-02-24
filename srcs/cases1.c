/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:59:29 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/24 11:10:38 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	case_rarb(t_node *a, t_node *b, int c)
{
	int	i;

	i = find_place_b(b, c);
	if (i < find_index(a, c))
		i = find_index(a, c);
	return (i);
}

int	case_rrarrb(t_node *a, t_node *b, int c)
{
	int	i;

	i = 0;
	if (find_place_b(b, c))
		i = stack_size(b) - find_place_b(b, c);
	if ((i < (stack_size(a) - find_index(a, c))) && find_index(a, c))
		i = stack_size(a) - find_index(a, c);
	return (i);
}

int	case_rrarb(t_node *a, t_node *b, int c)
{
	int	i;

	i = 0;
	if (find_index(a, c))
		i = stack_size(a) - find_index(a, c);
	i = find_place_b(b, c) + i;
	return (i);
}

int	case_rarrb(t_node *a, t_node *b, int c)
{
	int	i;

	i = 0;
	if (find_place_b(b, c))
		i = stack_size(b) - find_place_b(b, c);
	i = find_index(a, c) + i;
	return (i);
}
