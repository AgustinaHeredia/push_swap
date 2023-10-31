/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:41:11 by agheredi          #+#    #+#             */
/*   Updated: 2023/10/31 14:34:44 by agheredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack_node **stack)
{
	t_stack_node	*temp;

	temp = last_stack_node(*stack);
	if (stack_index(stack) <= 1)
		return ;
	else
	{
		while (last_stack_node(*stack) != NULL)
			(*stack) = (*stack)->prev;
		(*stack)->prev = temp;
	}
}

void	reverse_rotate_rr(t_stack_node **a, t_stack_node **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	write(1, "rrr\n", 4);
}
