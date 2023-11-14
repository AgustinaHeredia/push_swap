/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target_ft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:24:45 by agheredi          #+#    #+#             */
/*   Updated: 2023/11/14 16:49:27 by agheredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_target_node(t_stack_node **a, t_stack_node **b, int small)
{
	long				target_nbr;
	t_stack_node	*current_a;
	t_stack_node	*current_b;

	target_nbr = LONG_MAX;
	current_b = *b;
	while (current_b)
	{
		current_a = *a;
		while (current_a)
		{
			if (current_a->value == small)
			{
				target_nbr = big_nbr_value(b);
				current_a->target_node = current_b;
			}
			else if (current_a->value > current_b->value)
			{
				target_nbr = current_b->value;
				current_a->target_node = current_b;
			}
			current_a = current_a->next;
		}
		current_b = current_b->next;
	}
}

void	set_target_node_b(t_stack_node **a, t_stack_node **b)
{
	long			target_nbr;
	t_stack_node	*current_a;
	t_stack_node	*target_node;

	target_nbr = LONG_MAX;
	while (*b)
	{
		current_a = *a;
		while (current_a)
		{
			if (current_a->value > (*b)->value && current_a->value < target_nbr)
			{
				target_nbr = current_a->value;
				target_node = current_a;
			}
			current_a = current_a->next;
		}
		if (target_nbr == LONG_MAX)
			(*b)->target_node = small_value(a);
		else
			(*b)->target_node = target_node;
		*b = (*b)->next;
	}
}
