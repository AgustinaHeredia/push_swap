/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:55:58 by agheredi          #+#    #+#             */
/*   Updated: 2023/11/02 13:25:05 by agheredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	tri_node(t_stack_node **stack)
{
	if ((*stack)->value > (*stack)->next->value)
		swap_command(stack);
	else if ((*stack)->value > (*stack)->next->value
		&& (*stack)->next->value > (*stack)->next->next->value)
	{
		swap_command(stack);
		reverse_rotate(stack);
	}
	else if ((*stack)->value > (*stack)->next->value
		&& (*stack)->next->value < (*stack)->next->next->value)
		rotate_comand(stack);
	else if ((*stack)->value < (*stack)->next->value
		&& (*stack)->next->value > (*stack)->next->next->value)
	{
		swap_command(stack);
		rotate_comand(stack);
	}
	else if ((*stack)->value < (*stack)->next->value
		&& (*stack)->next->value > (*stack)->next->next->value)
		reverse_rotate(stack);
}
