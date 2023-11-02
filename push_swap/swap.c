/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:44:16 by agheredi          #+#    #+#             */
/*   Updated: 2023/11/02 16:01:57 by agheredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_command(t_stack_node **stack)
{
	t_stack_node	*temp;

	if (stack_len(stack) == 1 || stack == NULL || *stack == NULL)
		return ;
	temp = (*stack)->next;
	(*stack)->next = (*stack)->next->next;
	(*stack)->next->prev = *stack;
	(*stack)->prev = temp;
	temp->next = *stack;
	temp->prev = NULL;
	*stack = temp;
}

void	swap_sa(t_stack_node **a, bool check)
{
	swap_command(a);
	if (check != false)
		write(1, "sa\n", 3);
}

void	swap_sb(t_stack_node **b, bool check)
{
	swap_command(b);
	if (check != false)
		write(1, "sb\n", 3);
}

void	swap_comand_ab(t_stack_node **a, t_stack_node **b)
{
	swap_command(a);
	swap_command(b);
	write(1, "ss\n", 3);
}
