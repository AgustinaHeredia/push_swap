/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:23:38 by agheredi          #+#    #+#             */
/*   Updated: 2023/11/08 14:58:41 by agheredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_comand(t_stack_node **stack)
{
	t_stack_node	*last_node;

	if (stack_len(stack) == 1 || stack == NULL || *stack == NULL)
		return ;
	last_node = last_stack_node(*stack);
	last_node->next = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	last_node->next->prev = last_node;
	last_node->next->next = NULL;
}

void	rotate_ra(t_stack_node **a, bool check)
{
	rotate_comand(a);
	if (check != true)
		write(1, "ra\n", 3);
}

void	rotate_rb(t_stack_node **b, bool check)
{
	rotate_comand(b);
	if (check != true)
		write(1, "rb\n", 3);
}

void	rotate_comand_rr(t_stack_node **a, t_stack_node **b)
{
	rotate_comand(a);
	rotate_comand(b);
	write(1, "rr\n", 3);
}
