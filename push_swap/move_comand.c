/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_comand.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:57:42 by agheredi          #+#    #+#             */
/*   Updated: 2023/11/15 14:21:26 by agheredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_move_rr(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*cheaper;
	int				i;

	cheaper = find_cheaper_node(*a);
	if (cheaper->index <= cheaper->target_node->index)
		i = cheaper->index;
	else
		i = cheaper->target_node->index;
	while (i > 0)
	{
		rotate_comand_rr(a, b);
		i--;
	}
}

void	reverse_move_rrr(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*cheaper;
	int				i;
	int				len_a;
	int				len_b;

	cheaper = find_cheaper_node(*a);
	len_a = stack_len(*a) - cheaper->index;
	len_b = stack_len(*b) - cheaper->target_node->index;
	if (len_a <= len_b)
		i = len_a;
	else
		i = len_b;
	while (i > 0)
	{
		reverse_rotate_rr(a, b);
		i--;
	}
}

void	before_push(t_stack_node **stack, t_stack_node *node_move, char stk)
{
	while (*stack != node_move)
	{
		if (stk == 'a')
		{
			if (node_move->up_stack == true)
				rotate_ra(stack, false);
			if (node_move->up_stack == false)
				reverse_rra(stack, false);
		}
		else if (stk == 'b')
		{
			if (node_move->up_stack == true)
				rotate_rb(stack, false);
			if (node_move->up_stack == false)
				reverse_rrb(stack, false);
		}
	}
}

void	find_best_move_b(t_stack_node **a, t_stack_node **b)
{
	index_position(*a);
	index_position(*b);
	set_target_node_b(*b, *a);
}

void	move_b_to_a(t_stack_node **a, t_stack_node **b)
{
	before_push(b, (*b)->target_node, 'b');
	push_pa(b, a, false);
}
