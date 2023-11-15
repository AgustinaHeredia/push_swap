/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:39:10 by agheredi          #+#    #+#             */
/*   Updated: 2023/11/15 14:06:32 by agheredi         ###   ########.fr       */
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
	int					current_position;
	int					index;
	int					push_price;
	bool				up_stack;
	bool				cheaper;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
}	t_stack_node;

//inicialice.c

int				check_char(char *argv);
int				check_no_duplicate(t_stack_node *a, int nbr);
void			check_argv(char **argv, t_stack_node **a, int flag_argv);
void			iteri_index(t_stack_node *a);

//funcion para convertir un string en un long
long long		ft_atol(const char *str);

//exit.c 
void			ft_exit(int flag_argv, char **argv);
void			free_argv(char **argv);
void			deallocate_stack(t_stack_node **stack);

// stack_sorted.c
int				stack_sorted(t_stack_node *a);
void			order_stack(t_stack_node **a, t_stack_node **b);
void			turk_sort(t_stack_node **a, t_stack_node **b);

//few_node.c
void			three_node(t_stack_node **a);
void			four_sort(t_stack_node **a, t_stack_node **b);
void			five_sort(t_stack_node **a, t_stack_node **b);

//utils_stack_node.c
t_stack_node	*last_stack_node(t_stack_node *stack);
void			insert_beginning(t_stack_node **stack, int nbr);
int				index_node(t_stack_node *stack, int nbr_value);
t_stack_node	*big_value(t_stack_node *stack);
t_stack_node	*small_value(t_stack_node *stack);

//utils_list.c
t_stack_node	*ft_stacknew(int nb, int flag_argv, char **argv);
void			add_nb_stack(t_stack_node **a, int nbr,
					int flag_argv, char **argv);
int				stack_len(t_stack_node *a);
void			ft_stackadd_back(t_stack_node **stack, t_stack_node *new);

//comandos
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

// util_nbr_index.c 
int				big_nbr_value(t_stack_node *stack);
int				small_nbr_value(t_stack_node *stack);
void			index_position(t_stack_node *stack);
t_stack_node	*find_cheaper_node(t_stack_node *stack);

//big_sorted.c
void			find_best_move_a(t_stack_node **a, t_stack_node **b);
void			cost_push(t_stack_node *a, t_stack_node *b);
void			set_cheaper(t_stack_node *stack);
void			move_a_to_b(t_stack_node **a, t_stack_node **b);
void			last_order(t_stack_node **a);

//move_comand.c
void			rotate_move_rr(t_stack_node **a, t_stack_node **b);
void			reverse_move_rrr(t_stack_node **a, t_stack_node **b);
void			before_push(t_stack_node **stack,
					t_stack_node *node_move, char stk);
void			find_best_move_b(t_stack_node **a, t_stack_node **b);
void			move_b_to_a(t_stack_node **a, t_stack_node **b);

//target_ft.c
void			set_target_node(t_stack_node *a, t_stack_node *b);
void			set_target_node_b(t_stack_node *a, t_stack_node *b);

#endif
