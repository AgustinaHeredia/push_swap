/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:39:10 by agheredi          #+#    #+#             */
/*   Updated: 2023/11/02 16:10:54 by agheredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include <stdbool.h>

typedef struct s_stack_node
{
	struct s_stack_node	*prev;
	int					value;
	int					index;
	struct s_stack_node	*next;
}	t_stack_node;

void			init_stack(char **argv, t_stack_node **a, int flag_argv);
int				check_char(char *argv);
int				check_no_duplicate(t_stack_node **a, int nbr);
long long		ft_atol(const char *str);
void			ft_exit(int flag_argv, char **argv);
void			free_argv(char **argv);
void			deallocate_stack(t_stack_node **stack);
t_stack_node	*ft_stacknew(int nb, int flag_argv, char **argv);
void			add_nb_stack(t_stack_node **a, int nbr,
					int flag_argv, char **argv);
int				stack_len(t_stack_node **a);
void			ft_stackadd_back(t_stack_node **stack, t_stack_node *new);
int				stack_sorted(t_stack_node **a);
t_stack_node	*last_stack_node(t_stack_node *stack);
void			swap_command(t_stack_node **stack);
void			swap_sa(t_stack_node **a, bool check);
void			swap_sb(t_stack_node **b, bool check);
void			swap_comand_ab(t_stack_node **a, t_stack_node **b);
void			rotate_comand(t_stack_node **stack);
void			rotate_ra(t_stack_node **a, bool check);
void			rotate_rb(t_stack_node **b, bool check);
void			rotate_comand_rr(t_stack_node **a, t_stack_node **b);
void			reverse_rotate(t_stack_node **stack);
void			reverse_rra(t_stack_node **a, bool check);
void			reverse_rrb(t_stack_node **b, bool check);
void			reverse_rotate_rr(t_stack_node **a, t_stack_node **b);
void			push_command(t_stack_node **stack_dest, t_stack_node **src);
void			push_pa(t_stack_node **a, t_stack_node **b, bool check);
void			push_pb(t_stack_node **b, t_stack_node **a, bool check);
void			tri_node(t_stack_node **stack);
void			order_stack(t_stack_node **a, t_stack_node **b);
void			five_sort(t_stack_node **a, t_stack_node **b);

#endif
