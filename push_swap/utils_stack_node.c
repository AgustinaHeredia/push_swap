/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_stack_node.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:23:24 by agheredi          #+#    #+#             */
/*   Updated: 2023/11/06 14:25:08 by agheredi         ###   ########.fr       */
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

int	index_node(t_stack_node **stack, int nbr_value)
{
	int	index;
	
	index = 0;
	if (!stack)
		return (-1);
	while (*stack)
	{
		if (nbr_value > (*stack)->value)
			index++;
		*stack = (*stack)->next;
	}
	return (index);
}

