/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:32:44 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/24 11:10:48 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	case_rarb_a(t_node *a, t_node *b, int c)
{
	int	i;

	i = find_place_a(a, c);
	if (i < find_index(b, c))
		i = find_index(b, c);
	return (i);
}

int	case_rrarrb_a(t_node *a, t_node *b, int c)
{
	int	i;

	i = 0;
	if (find_place_a(a, c))
		i = stack_size(a) - find_place_a(a, c);
	if ((i < (stack_size(b) - find_index(b, c))) && find_index(b, c))
		i = stack_size(b) - find_index(b, c);
	return (i);
}

int	case_rarrb_a(t_node *a, t_node *b, int c)
{
	int	i;

	i = 0;
	if (find_index(b, c))
		i = stack_size(b) - find_index(b, c);
	i = find_place_a(a, c) + i;
	return (i);
}

int	case_rrarb_a(t_node *a, t_node *b, int c)
{
	int	i;

	i = 0;
	if (find_place_a(a, c))
		i = stack_size(a) - find_place_a(a, c);
	i = find_index(b, c) + i;
	return (i);
}
