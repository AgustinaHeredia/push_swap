/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:36:22 by agheredi          #+#    #+#             */
/*   Updated: 2023/10/13 13:06:38 by agheredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*ft_stacknew(int nb, int index)
{
	t_stack_node	*new;

	new = (t_stack_node *) malloc(sizeof(t_stack_node));
	if (!new)
		return (NULL);
	new->value = nb;
	new->current_position = index;
	new->next = NULL;
	return (new);
}

/*void	ft_stackadd_back(t_stack_node **stack, t_stack_node *new)
{
	t_stack_node	*temp;

	temp = *stack;
	if (!*stack)
		*stack = new;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
}

void	ft_stackadd_front(t_stack_node **stack, t_stack_node *new)
{
	if (stack)
	{
		new -> next = *stack;
		*stack = new;
	}
	else
		*stack = new;
}

t_stack_node	*ft_stacklast(t_stack_node *stack)
{
	if (!stack)
		return (NULL);
	while (stack -> next)
		stack = stack -> next;
	return (stack);
}
*/