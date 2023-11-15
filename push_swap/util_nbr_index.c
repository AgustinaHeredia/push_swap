/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_nbr_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:16:30 by agheredi          #+#    #+#             */
/*   Updated: 2023/11/15 14:26:41 by agheredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	big_nbr_value(t_stack_node *stack)
{
	t_stack_node	*current;
	int				big_nbr;

	if (stack == NULL)
		return (0);
	current = stack;
	big_nbr = INT_MIN;
	while (current)
	{
		if (current->value > big_nbr)
			big_nbr = current->value;
		current = current->next;
	}
	return (big_nbr);
}

int	small_nbr_value(t_stack_node *stack)
{
	t_stack_node	*current;
	int				small_nbr;

	if (stack == NULL)
		return (0);
	current = stack;
	small_nbr = INT_MAX;
	while (current)
	{
		if (current->value < small_nbr)
			small_nbr = current->value;
		current = current->next;
	}
	return (small_nbr);
}

void	index_position(t_stack_node *stack)
{
	int				i;
	int				media_len;

	i = 0;
	media_len = stack_len(stack) / 2;
	while (stack)
	{
		stack->current_position = i;
		stack->cheaper = false;
		if (i < media_len)
		{
			stack->up_stack = true;
		}
		else
		{
			stack->up_stack = false;
		}
		stack = stack->next;
		i++;
	}
}

t_stack_node	*find_cheaper_node(t_stack_node *stack)
{
	t_stack_node	*cheaper_node;

	if (!stack)
		return (NULL);
	while (stack)
	{
		if (stack->cheaper == true)
			cheaper_node = stack;
		stack = stack->next;
	}
	return (cheaper_node);
}
