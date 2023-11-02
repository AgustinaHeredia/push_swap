/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:24:15 by agheredi          #+#    #+#             */
/*   Updated: 2023/11/02 15:31:27 by agheredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	five_sort(t_stack_node **a, t_stack_node **b)
{
	push_command(b, a);
	push_command(b, a);
	tri_node(a);
	push_command(a, b);
	if ((*a)->value > (*a)->next->value)
		rotate_comand(a);
	push_command(a, b);
	if ((*a)->value > (*a)->next->value)
		rotate_comand(a);
}
