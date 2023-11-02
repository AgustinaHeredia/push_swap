/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_stack_node.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:23:24 by agheredi          #+#    #+#             */
/*   Updated: 2023/11/02 10:42:44 by agheredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*last_stack_node(t_stack_node *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

void	insert_beginning(t_stack_node **stack, int nbr)
{
	t_stack_node	*new_node;

	new_node = (t_stack_node *) malloc(sizeof(t_stack_node));
	if (!new_node)
		return ;
	new_node->value = nbr;
	new_node->index = 0;
	new_node->prev = NULL;
	new_node->next = *stack;
	*stack = new_node;
}
