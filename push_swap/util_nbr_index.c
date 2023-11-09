/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_nbr_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:16:30 by agheredi          #+#    #+#             */
/*   Updated: 2023/11/09 15:52:53 by agheredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*big_nbr_value(t_stack_node **stack)
{
	t_stack_node	*current;
	int				big_nbr;

	if (stack == NULL)
		return (NULL);
	current = *stack;
	big_nbr = INT_MIN;
	while (current)
	{
		if (current->value > big_nbr)
			big_nbr = current->value;
		current = current->next;
	}
	return (big_nbr);
}

int	*small_nbr_value(t_stack_node **stack)
{
	t_stack_node	*current;
	int				small_nbr;

	if (stack == NULL)
		return (NULL);
	current = *stack;
	small_nbr = INT_MAX;
	while (current)
	{
		if (current->value < small_nbr)
			small_nbr = current->value;
		current = current->next;
	}
	return (small_nbr);
}

void	index_position(t_stack_node **stack)
{
	int				i;
	t_stack_node	*temp;

	temp = *stack;
	if (!temp)
		return (0);
	i = 0;
	while (temp->next)
	{
		temp->current_position = i;
		temp = temp->next;
		i++;
	}
}
