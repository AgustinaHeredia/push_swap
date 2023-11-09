/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:37:45 by agheredi          #+#    #+#             */
/*   Updated: 2023/11/09 16:23:13 by agheredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_sorted(t_stack_node **a)
{
	t_stack_node	*current;

	current = *a;
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

	len = stack_len(a);
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
	while (stack_len(a) > 3)
		push_pb(b, a, false);
	
}
