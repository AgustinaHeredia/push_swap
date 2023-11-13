/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:36:22 by agheredi          #+#    #+#             */
/*   Updated: 2023/11/13 16:15:59 by agheredi         ###   ########.fr       */
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

int	stack_len(t_stack_node **a)
{
	int				i;
	t_stack_node	*temp;

	temp = *a;
	if (!temp)
		return (0);
	i = 1;
	while (temp->next)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

void	ft_stackadd_back(t_stack_node **stack, t_stack_node *new)
{
	t_stack_node	*temp;
	t_stack_node	*original;

	original = *stack;
	temp = original;
	if (!original)
		*stack = new;
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		new->prev = temp;
		temp->next = new;
	}
}

void	set_target_nbr(t_stack_node **a, t_stack_node **b, int small)
{
	int				target_nbr;
	t_stack_node	*current_a;
	t_stack_node	*target_node;

	target_nbr = INT_MAX;
	while (*b)
	{
		current_a = *a;
		while (current_a)
		{
			if ((*b)->value == small)
			{
				target_nbr = big_nbr_value(b);
				current_a->target_node = *b;
			}
			else if (current_a->value > (*b)->value)
			{
				target_nbr = (*b)->value;
				current_a->target_node = *b;
			}
			current_a = current_a->next;
		}
		*b = (*b)->next;
	}
}
