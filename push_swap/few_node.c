/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   few_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:49:23 by agheredi          #+#    #+#             */
/*   Updated: 2023/11/08 14:58:07 by agheredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*big_value(t_stack_node **stack)
{
	t_stack_node	*big_node;
	t_stack_node	*current;
	int				big_nbr;

	if (stack == NULL)
		return (NULL);
	current = *stack;
	big_nbr = INT_MIN;
	while (current)
	{
		if (current->value > big_nbr)
		{
			big_nbr = current->value;
			big_node = current;
		}
		current = current->next;
	}
	return (big_node);
}

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

void	five_sort(t_stack_node **a, t_stack_node **b)
{
	push_command(b, a);
	push_command(b, a);
	three_node(a);
	push_command(a, b);
	if ((*a)->value > (*a)->next->value)
		rotate_comand(a);
	push_command(a, b);
	if ((*a)->value > (*a)->next->value)
		rotate_comand(a);
}
