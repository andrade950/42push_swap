/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:45:43 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/24 11:12:35 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	rotate_type_ab(t_node *a, t_node *b)
{
	int		i;
	t_node	*temp;

	temp = a;
	i = case_rrarrb(a, b, a->value);
	while (temp)
	{
		if (i > case_rarb(a, b, temp->value))
			i = case_rarb(a, b, temp->value);
		if (i > case_rrarrb(a, b, temp->value))
			i = case_rrarrb(a, b, temp->value);
		if (i > case_rarrb(a, b, temp->value))
			i = case_rarrb(a, b, temp->value);
		if (i > case_rrarb(a, b, temp->value))
			i = case_rrarb(a, b, temp->value);
		temp = temp->next;
	}
	return (i);
}

int	rotate_type_ba(t_node *a, t_node *b)
{
	int		i;
	t_node	*temp;

	temp = b;
	i = case_rrarrb_a(a, b, b->value);
	while (temp)
	{
		if (i > case_rarb_a(a, b, temp->value))
			i = case_rarb_a(a, b, temp->value);
		if (i > case_rrarrb_a(a, b, temp->value))
			i = case_rrarrb_a(a, b, temp->value);
		if (i > case_rarrb_a(a, b, temp->value))
			i = case_rarrb_a(a, b, temp->value);
		if (i > case_rrarb_a(a, b, temp->value))
			i = case_rrarb_a(a, b, temp->value);
		temp = temp->next;
	}
	return (i);
}
