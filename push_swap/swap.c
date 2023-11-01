/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusheredia <agusheredia@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:44:16 by agheredi          #+#    #+#             */
/*   Updated: 2023/11/01 22:37:08 by agusheredia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_command(t_stack_node **stack)
{
	t_stack_node	*temp;

	if (stack_index(*stack) == 1 || stack == NULL || *stack == NULL)
		return ;
	temp = (*stack)->next;
	(*stack)->next = (*stack)->next->next;
	(*stack)->next->prev = *stack;
	(*stack)->prev = temp;
	temp->next = *stack;
	temp->prev = NULL;
	*stack = temp;
}

static void	swap_comand_ab(t_stack_node **a, t_stack_node **b)
{
	swap_comand(a);
	swap_comand(b);
	write(1, "ss\n", 3);
}
