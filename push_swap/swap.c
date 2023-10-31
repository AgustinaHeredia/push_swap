/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:44:16 by agheredi          #+#    #+#             */
/*   Updated: 2023/10/31 17:00:48 by agheredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_command(t_stack_node **stack)
{
	t_stack_node	*temp;

	temp = *stack;
	if (stack_index(stack) == 1 || stack == NULL || *stack == NULL)
		return ;
	*stack = (*stack)->next;
	(*stack)->next = temp;
}

void	swap_comand_ab(t_stack_node **a, t_stack_node **b)
{
	swap_comand(a);
	swap_comand(b);
	write(1, "ss\n", 3);
}
