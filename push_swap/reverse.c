/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:41:11 by agheredi          #+#    #+#             */
/*   Updated: 2023/11/08 14:58:48 by agheredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack_node **stack)
{
	t_stack_node	*last;

	if (stack_len(stack) == 1 || stack == NULL || *stack == NULL)
		return ;
	last = last_stack_node(*stack);
	last->prev->next = NULL;
	last->next = *stack;
	last->prev = NULL;
	*stack = last;
	last->next->prev = last;
}

void	reverse_rra(t_stack_node **a, bool check)
{
	reverse_rotate(a);
	if (check != true)
		write(1, "rra\n", 4);
}

void	reverse_rrb(t_stack_node **b, bool check)
{
	reverse_rotate(b);
	if (check != true)
		write(1, "rrb\n", 4);
}

void	reverse_rotate_rr(t_stack_node **a, t_stack_node **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	write(1, "rrr\n", 4);
}
