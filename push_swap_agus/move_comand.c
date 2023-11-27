/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_comand.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:57:42 by agheredi          #+#    #+#             */
/*   Updated: 2023/11/21 11:19:19 by agheredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_move_rr(t_stack_node **a, t_stack_node **b,
						t_stack_node *cheaper)
{
	while (*b != cheaper->target_node && *a != cheaper)
		rotate_comand_rr(a, b);
	index_position(*a);
	index_position(*b);
}

void	reverse_move_rrr(t_stack_node **a, t_stack_node **b,
						t_stack_node *cheaper)
{
	while (*b != cheaper->target_node && *a != cheaper)
		reverse_rotate_rr(a, b);
	index_position(*a);
	index_position(*b);
}

void	before_push(t_stack_node **stack, t_stack_node *node_move, char stk)
{
	while (*stack != node_move)
	{
		if (stk == 'a')
		{
			if (node_move->up_stack == true)
				rotate_ra(stack, true);
			else
				reverse_rra(stack, true);
		}
		else if (stk == 'b')
		{
			if (node_move->up_stack == true)
				rotate_rb(stack, true);
			else
				reverse_rrb(stack, true);
		}
	}
}

void	find_best_move_b(t_stack_node **a, t_stack_node **b)
{
	index_position(*a);
	index_position(*b);
	set_target_node_b(*a, *b);
}

void	move_b_to_a(t_stack_node **a, t_stack_node **b)
{
	before_push(a, (*b)->target_node, 'a');
	push_pa(a, b, true);
}
