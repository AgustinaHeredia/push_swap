/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusheredia <agusheredia@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:19:16 by agheredi          #+#    #+#             */
/*   Updated: 2023/11/02 00:19:44 by agusheredia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_command(t_stack_node **stack_dest, t_stack_node **src)
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
