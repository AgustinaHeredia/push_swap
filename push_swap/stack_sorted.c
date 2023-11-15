/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:37:45 by agheredi          #+#    #+#             */
/*   Updated: 2023/11/15 14:27:00 by agheredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_sorted(t_stack_node *a)
{
	t_stack_node	*current;

	current = a;
	while (current != NULL && current->next != NULL)
	{
		if (current->value > (current->next)->value)
			return (1);
		current = current->next;
	}
	return (0);
}

void	order_stack(t_stack_node **a, t_stack_node **b)
{
	int	len;

	len = stack_len(*a);
	if (len == 2)
		swap_sa(a, false);
	else if (len == 3)
		three_node(a);
	else if (len == 4)
		four_sort(a, b);
	else if (len == 5)
		five_sort(a, b);
	else
		turk_sort(a, b);
}

void	turk_sort(t_stack_node **a, t_stack_node **b)
{
	int	len_a;

	len_a = stack_len(*a);
	if (len_a > 3 && stack_sorted(*a) == 1)
		push_pb(b, a, true);
	if (len_a-- > 3 && stack_sorted(*a) == 1)
		push_pb(b, a, true);
	//while (len_a-- > 3 && stack_sorted(*a) == 1)
	while (*a)
	{
		find_best_move_a(a, b);
		move_a_to_b(a, b);
	}
	//three_node(a);
	while (*b)
	{
		//find_best_move_b(a, b);
		//move_b_to_a(a, b);
		push_pa(a, b, false);
	}
	last_order(a);
}
