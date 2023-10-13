/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:39:10 by agheredi          #+#    #+#             */
/*   Updated: 2023/10/13 13:30:19 by agheredi         ###   ########.fr       */
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
	struct s_stack	*prev;
	int				value;
	int				current_position;
	struct s_stack	*next;
}	t_stack_node;

static long	ft_atol(const char *str);
void		init_stack(char *argv, t_stack_node a);
void		ft_exit(int n);

#endif
