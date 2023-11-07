/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:37:45 by agheredi          #+#    #+#             */
/*   Updated: 2023/11/07 17:30:19 by agheredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_sorted(t_stack_node **a)
{
	t_stack_node	*current;

	current = *a;
	while (current != NULL && current->next != NULL)
	{
		if (current->index > (current->next)->index)
			return (1);
		current = current->next;
	}
	return (0);
}

void	order_stack(t_stack_node **a, t_stack_node **b)
{
	(void)b;
	printf("Entra en order stack\n");
	if (stack_len(a) == 2)
	{
		printf("Entra en el if\n");
		swap_sa(a, false);
	}
	else if (stack_len(a) == 3)
		three_node(a);
	//else
	//	five_sort(a, b);
}
