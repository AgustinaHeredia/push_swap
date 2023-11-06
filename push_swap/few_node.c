/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   few_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusheredia <agusheredia@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:06:41 by agusheredia       #+#    #+#             */
/*   Updated: 2023/11/02 18:25:30 by agusheredia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*big_value(t_stack_node **stack)
{
	t_stack_node	*big_node;
	int				big_nbr;

	if (stack == NULL)
		return (NULL);
	big_nbr = INT_MIN;
	while (stack)
	{
		if ((*stack)->value > big_nbr)
		{
			big_nbr = (*stack)->value;
			big_node = *stack;
		}
		*stack = (*stack)->next;
	}
	return (big_node);
}

void	three_node(t_stack_node **a)
{
	t_stack_node	*big_node;

	big_node = big_value(a);
	if (*a == big_node)
		rotate_ra(a, false);
	else if ((*a)->value > (*a)->next->value)
		swap_sa(a, false);
}

void	five_sort(t_stack_node **a, t_stack_node **b)
{
	push_command(b, a);
	push_command(b, a);
	tri_node(a);
	push_command(a, b);
	if ((*a)->value > (*a)->next->value)
		rotate_comand(a);
	push_command(a, b);
	if ((*a)->value > (*a)->next->value)
		rotate_comand(a);
}
