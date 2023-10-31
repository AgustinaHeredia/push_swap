/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:23:38 by agheredi          #+#    #+#             */
/*   Updated: 2023/10/31 14:11:31 by agheredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_comand(t_stack_node **stack)
{
	t_stack_node	*temp;

	temp = *stack;
	if (stack_index(stack) <= 1)
		return ;
	else
	{
		while ((*stack)->next != NULL)
			(*stack) = (*stack)->next;
		(*stack)->next = temp;
	}
}

void	rotate_comand_rr(t_stack_node **a, t_stack_node **b)
{
	rotate_comand(a);
	rotate_comand(b);
	write(1, "rr\n", 3);
}
