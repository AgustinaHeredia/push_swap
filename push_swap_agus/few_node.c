/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   few_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:49:23 by agheredi          #+#    #+#             */
/*   Updated: 2023/11/21 11:18:40 by agheredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_node(t_stack_node **a)
{
	t_stack_node	*big_node;

	big_node = big_value(*a);
	if (*a == big_node)
		rotate_ra(a, true);
	else if ((*a)->next == big_node)
		reverse_rra(a, true);
	if ((*a)->value > (*a)->next->value)
		swap_sa(a, true);
}

void	four_sort(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*small_node;

	small_node = small_value(*a);
	if (*a != small_node)
	{
		if ((*a)->next == small_node)
			swap_sa(a, true);
		else if ((*a)->next->next == small_node)
		{
			reverse_rra(a, true);
			reverse_rra(a, true);
		}
		else
			reverse_rra(a, true);
	}
	push_pb(b, a, true);
	three_node(a);
	push_pa(a, b, true);
}

void	five_sort(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*small_node;

	small_node = small_value(*a);
	if (*a != small_node)
	{
		if ((*a)->next == small_node)
			swap_sa(a, true);
		else if ((*a)->next->next == small_node)
		{
			rotate_ra(a, true);
			swap_sa(a, true);
		}
		else if ((*a)->next->next->next == small_node)
		{
			reverse_rra(a, true);
			reverse_rra(a, true);
		}
		else
			reverse_rra(a, true);
	}
	push_pb(b, a, true);
	four_sort(a, b);
	push_pa(a, b, true);
}
