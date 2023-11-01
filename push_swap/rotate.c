/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusheredia <agusheredia@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:23:38 by agheredi          #+#    #+#             */
/*   Updated: 2023/11/01 23:22:38 by agusheredia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_comand(t_stack_node **stack)
{
	t_stack_node	*last_node;

	if (stack_index(*stack) == 1 || stack == NULL || *stack == NULL)
		return ;
	last_node = last_stack_node(*stack);
	last_node->next = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	last_node->next->prev = last_node;
	last_node->next->next = NULL;
}

static void	rotate_comand_rr(t_stack_node **a, t_stack_node **b)
{
	rotate_comand(a);
	rotate_comand(b);
	write(1, "rr\n", 3);
}
