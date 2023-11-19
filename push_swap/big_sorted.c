/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sorted.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusheredia <agusheredia@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:39:05 by agheredi          #+#    #+#             */
/*   Updated: 2023/11/18 21:25:40 by agusheredia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_best_move_a(t_stack_node **a, t_stack_node **b)
{
	index_position(*a);
	index_position(*b);
	set_target_node(*a, *b);
	cost_push(*a, *b);
	set_cheaper(*a);
}

void	cost_push(t_stack_node *a, t_stack_node *b)
{
	int				len_a;
	int				len_b;

	len_a = stack_len(a);
	len_b = stack_len(b);
	while (a)
	{
		a->push_price = a->current_position;
		if (a->up_stack == false)
			a->push_price = len_a - (a->current_position);
		if (a->target_node->up_stack == true)
			a->push_price += a->target_node->current_position;
		else
			a->push_price += len_b - (a->target_node->current_position);
		a = a->next;
	}
}

void	set_cheaper(t_stack_node *stack)
{
	t_stack_node	*cheaper_node;
	long			cheaper_cost;

	if (!stack)
		return ;
	cheaper_cost = LONG_MAX;
	while (stack)
	{
		if (stack->push_price < cheaper_cost)
		{
			cheaper_cost = stack->push_price;
			cheaper_node = stack;
		}
		stack = stack->next;
	}
	cheaper_node->cheaper = true;
}

void	move_a_to_b(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*cheaper;

	cheaper = find_cheaper_node(*a);
	if (cheaper->up_stack == true && cheaper->target_node->up_stack == true)
		rotate_move_rr(a, b, cheaper);
	else if (cheaper->up_stack == false
		&& cheaper->target_node->up_stack == false)
		reverse_move_rrr(a, b, cheaper);
	before_push(a, cheaper, 'a');
	before_push(b, cheaper->target_node, 'b');
	push_pb(b, a, true);
}

void	last_order(t_stack_node **a)
{
	while ((*a)->value != small_value(*a)->value)
	{
		if (small_value(*a)->up_stack == true)
			rotate_ra(a, false);
		else
			reverse_rra(a, false);
	}
}
