/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:37:45 by agheredi          #+#    #+#             */
/*   Updated: 2023/11/02 15:39:55 by agheredi         ###   ########.fr       */
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
	if (stack_len(a) == 3)
		tri_node(a);
	else if (stack_len(a) <= 5)
		five_sort(a, b);
}