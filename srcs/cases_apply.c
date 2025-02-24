/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases_apply.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:33:50 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/24 11:10:58 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	apply_rarb(t_node **a, t_node **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->value != c && find_place_b(*b, c) > 0)
			rr(a, b);
		while ((*a)->value != c)
			ra(a, 0);
		while (find_place_b(*b, c) > 0)
			rb(b, 0);
		pb(a, b);
	}
	else
	{
		while ((*b)->value != c && find_place_a(*a, c) > 0)
			rr(a, b);
		while ((*b)->value != c)
			rb(b, 0);
		while (find_place_a(*a, c) > 0)
			ra(a, 0);
		pa(a, b);
	}
	return (-1);
}

int	apply_rrarrb(t_node **a, t_node **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->value != c && find_place_b(*b, c) > 0)
			rrr(a, b);
		while ((*a)->value != c)
			rra(a, 0);
		while (find_place_b(*b, c) > 0)
			rrb(b, 0);
		pb(a, b);
	}
	else
	{
		while ((*b)->value != c && find_place_a(*a, c) > 0)
			rrr(a, b);
		while ((*b)->value != c)
			rrb(b, 0);
		while (find_place_a(*a, c) > 0)
			rra(a, 0);
		pa(a, b);
	}
	return (-1);
}

int	apply_rrarb(t_node **a, t_node **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->value != c)
			rra(a, 0);
		while (find_place_b(*b, c) > 0)
			rb(b, 0);
		pb(a, b);
	}
	else
	{
		while (find_place_a(*a, c) > 0)
			rra(a, 0);
		while ((*b)->value != c)
			rb(b, 0);
		pa(a, b);
	}
	return (-1);
}

int	apply_rarrb(t_node **a, t_node **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->value != c)
			ra(a, 0);
		while (find_place_b(*b, c) > 0)
			rrb(b, 0);
		pb(a, b);
	}
	else
	{
		while (find_place_a(*a, c) > 0)
			ra(a, 0);
		while ((*b)->value != c)
			rrb(b, 0);
		pa(a, b);
	}
	return (-1);
}
