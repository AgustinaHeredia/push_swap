/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:19:16 by agheredi          #+#    #+#             */
/*   Updated: 2023/11/02 15:58:49 by agheredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_command(t_stack_node **stack_dest, t_stack_node **src)
{
	t_stack_node	*node_push;

	if (*src == NULL)
		return ;
	node_push = *src;
	*src = (*src)->next;
	if (*src != NULL)
		(*src)->prev = NULL;
	if (*stack_dest == NULL)
	{
		*stack_dest = node_push;
		node_push->prev = NULL;
	}
	else
	{
		node_push->next = *stack_dest;
		node_push->next->prev = node_push;
		*stack_dest = node_push;
	}
}

void	push_pa(t_stack_node **a, t_stack_node **b, bool check)
{
	push_command(a, b);
	if (check != false)
		write(1, "pa\n", 3);
}

void	push_pb(t_stack_node **b, t_stack_node **a, bool check)
{
	push_command(b, a);
	if (check != false)
		write(1, "pb\n", 3);
}
