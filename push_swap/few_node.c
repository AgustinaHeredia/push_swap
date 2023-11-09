/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   few_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:49:23 by agheredi          #+#    #+#             */
/*   Updated: 2023/11/09 13:11:54 by agheredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_node(t_stack_node **a)
{
	t_stack_node	*big_node;

	big_node = big_value(a);
	if (*a == big_node)
		rotate_ra(a, false);
	else if ((*a)->next == big_node)
		reverse_rra(a, false);
	if ((*a)->index > (*a)->next->index)
		swap_sa(a, false);
}

void	four_sort(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*small_node;

	small_node = small_value(a);
	if (*a != small_node)
	{
		if ((*a)->next == small_node)
			swap_sa(a, false);
		else if ((*a)->next->next == small_node)
		{
			reverse_rra(a, false);
			reverse_rra(a, false);
		}
		else
			reverse_rra(a, false);
	}
	push_pb(b, a, false);
	three_node(a);
	push_pa(a, b, false);
}

void	five_sort(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*small_node;

	small_node = small_value(a);
	if (*a != small_node)
	{
		if ((*a)->next == small_node)
			swap_sa(a, false);
		else if ((*a)->next->next == small_node)
		{
			rotate_ra(a, false);
			swap_sa(a, false);
		}
		else if ((*a)->next->next->next == small_node)
		{
			reverse_rra(a, false);
			reverse_rra(a, false);
		}
		else
			reverse_rra(a, false);
	}
	push_pb(b, a, false);
	four_sort(a, b);
	push_pa(a, b, false);
}
