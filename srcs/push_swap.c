/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:54:47 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/24 11:19:17 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int ac, char **av)
{
	char	**args;
	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		return (0);
	else if (ac == 2)
		args = ft_split(av[1], ' ');
	else
		args = av + 1;
	if (error(args))
		return (1);
	create_stack(&stack_a, args);
	init_index(&stack_a);
	if (!is_sorted(stack_a))
		choose_algorithm(&stack_a, &stack_b, stack_size(stack_a));
	free_stack(stack_a);
	free_stack(stack_b);
	if (ac == 2)
		free_args(args);
	return (0);
}

/*void	printstack(t_node *head)
{
	t_node  *tmp;	tmp = head;
	while (tmp != NULL)
	{
		ft_putnbr_fd(tmp->value, 1);
		ft_putendl_fd("", 1);
		tmp = tmp->next;
	}
}*/
