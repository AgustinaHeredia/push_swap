/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusheredia <agusheredia@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:36:22 by agheredi          #+#    #+#             */
/*   Updated: 2023/10/17 11:50:51 by agusheredia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*ft_stacknew(int nb, int flag_argv, char **argv)
{
	t_stack_node	*new;

	new = (t_stack_node *) malloc(sizeof(t_stack_node));
	if (!new)
		ft_exit(flag_argv, argv);
	new->value = nb;
	new->index = 0;
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

void	add_nb_stack(t_stack_node **a, int nbr, int flag_argv, char **argv)
{
	t_stack_node	*node;

	node = ft_stacknew(nbr, flag_argv, argv);
	if (*a == NULL)
		*a = node;
	else
		ft_stackadd_back(a, node);
}

int	stack_index(t_stack_node **a)
{
	int	i;

	if (!*a)
		return (0);
	i = 1;
	while ((*a)->next)
	{
		*a = (*a)->next;
		i++;
	}
	return (i);
}

void	ft_stackadd_back(t_stack_node **stack, t_stack_node *new)
{
	t_stack_node	*temp;

	temp = *stack;
	if (!*stack)
		*stack = new;
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new;
		new->prev = temp;
		new->index = stack_index(stack); 
		//#stack o +1?
	}
}
