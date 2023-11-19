/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target_ft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusheredia <agusheredia@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:24:45 by agheredi          #+#    #+#             */
/*   Updated: 2023/11/19 18:56:52 by agusheredia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_target_node(t_stack_node *a, t_stack_node *b)
{
	long			target_nbr;
	t_stack_node	*target_node;
	t_stack_node	*current_b;

	current_b = b;
	while (a)
	{
		target_nbr = LONG_MIN;
		current_b = b;
		while (current_b)
		{
			if (current_b->value < a->value && current_b->value > target_nbr)
			{
				target_nbr = current_b->value;
				target_node = current_b;
			}
			current_b = current_b->next;
		}
		if (target_nbr == LONG_MIN)
			a->target_node = big_value(b);
		else
			a->target_node = target_node;
		a = a->next;
	}
}

void	set_target_node_b(t_stack_node *a, t_stack_node *b)
{
	long			target_nbr;
	t_stack_node	*current_a;
	t_stack_node	*target_node;

	while (b)
	{
		target_nbr = LONG_MAX;
		current_a = a;
		while (current_a)
		{
			if (current_a->value > b->value && current_a->value < target_nbr)
			{
				target_nbr = current_a->value;
				target_node = current_a;
			}
			current_a = current_a->next;
		}
		if (target_nbr == LONG_MAX)
			b->target_node = small_value(a);
		else
			b->target_node = target_node;
		b = b->next;
	}
}
