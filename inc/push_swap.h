/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 15:28:42 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/24 11:19:40 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libs/libft/libft.h"
# include "../libs/ft_printf/include/ft_printf.h"
# include <limits.h>

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

//Functions stack.c
void	add_to_stack(t_node **stack, int value);
void	create_stack(t_node **stack, char **args);
int		stack_size(t_node *stack);

//Functions node.c
t_node	*create_node(int value);
t_node	*lstlast(t_node *head);

//Functions index.c
t_node	*get_next_min(t_node **stack);
void	init_index(t_node **stack);
int		find_index(t_node *a, int value);
int		get_min_index(t_node *stack);

//Functions algorithm.c
void	turk_sort(t_node **stack_a);
void	choose_algorithm(t_node **stack_a, t_node **stack_b, int size);
void	sort_three(t_node **stack_a);
void	sort_ff(t_node **stack_a, t_node **stack_b, int size);

//Functions sort.c
void	sort_b_until_three(t_node **stack_a, t_node **stack_b);
t_node	*sort_b(t_node **stack_a);
t_node	**sort_a(t_node **stack_a, t_node **stack_b);

//Functions operations.c
void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_a, t_node **stack_b);
void	ra(t_node **stack_a, int n);
void	rb(t_node **stack_b, int n);
void	rr(t_node **stack_a, t_node **stack_b);
void	rra(t_node **stack_a, int n);
void	rrb(t_node **stack_b, int n);
void	rrr(t_node **stack_a, t_node **stack_b);
void	sa(t_node **stack_a, int n);
void	sb(t_node **stack_b, int n);
void	ss(t_node **stack_a, t_node **stack_b);

//Functions rotate_type.c
int		rotate_type_ab(t_node *a, t_node *b);
int		rotate_type_ba(t_node *a, t_node *b);

//Functions cases.c
int		case_rarb(t_node *a, t_node *b, int c);
int		case_rrarrb(t_node *a, t_node *b, int c);
int		case_rrarb(t_node *a, t_node *b, int c);
int		case_rarrb(t_node *a, t_node *b, int c);
int		case_rarb_a(t_node *a, t_node *b, int c);
int		case_rrarrb_a(t_node *a, t_node *b, int c);
int		case_rarrb_a(t_node *a, t_node *b, int c);
int		case_rrarb_a(t_node *a, t_node *b, int c);
int		apply_rarb(t_node **a, t_node **b, int c, char s);
int		apply_rrarrb(t_node **a, t_node **b, int c, char s);
int		apply_rrarb(t_node **a, t_node **b, int c, char s);
int		apply_rarrb(t_node **a, t_node **b, int c, char s);

//Functions utils.c
void	bring_to_top(t_node **stack, int index, int size);
long	ft_atol(const char *str);
void	move_min_to_top(t_node **stack);
void	move_min_to_top2(int min_index, int size, t_node **stack);
int		error(char	**args);

//Functions finds.c
int		find_min(t_node *a);
int		find_max(t_node *a);
int		find_place_a(t_node *stack_a, int v_push);
int		find_place_b(t_node *stack_b, int v_push);

//Functions frees.c
void	free_stack(t_node *stack);
void	free_args(char **args);

//Functions validations.c
int		is_number(const char *str);
int		check_duplicates(char **args);
int		validate_args(char **args);
int		is_sorted(t_node *stack);
int		ft_range(const char *str);
int		validate_range(char **args);

//Extra
//void	printstack(t_node *head)

#endif
