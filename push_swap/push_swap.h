/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:39:10 by agheredi          #+#    #+#             */
/*   Updated: 2023/10/18 12:51:20 by agheredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <stdio.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_stack_node
{
	struct s_stack_node	*prev;
	int					value;
	int					index;
	struct s_stack_node	*next;
}	t_stack_node;

void			init_stack(char **argv, t_stack_node **a, int flag_argv);
int				check_char(char *argv);
int				check_no_duplicate(t_stack_node *a, int nbr);
long long		ft_atol(const char *str);
void			ft_exit(int flag_argv, char **argv);
void			free_argv(char **argv);
t_stack_node	*ft_stacknew(int nb, int flag_argv, char **argv);
void			add_nb_stack(t_stack_node **a, int nbr,
					int flag_argv, char **argv);
int				stack_index(t_stack_node **a);
void			ft_stackadd_back(t_stack_node **stack, t_stack_node *new);

#endif
