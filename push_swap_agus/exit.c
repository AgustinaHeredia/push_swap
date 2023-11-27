/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:27:05 by agheredi          #+#    #+#             */
/*   Updated: 2023/11/21 14:33:45 by agheredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit(int flag_argv, char **argv)
{
	if (flag_argv == 1)
		free_argv(argv);
	write(2, "Error\n", 6);
	exit(0);
}

void	free_argv(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(argv);
}

void	deallocate_stack(t_stack_node **stack)
{
	t_stack_node	*current;
	t_stack_node	*aux;

	if (stack == NULL)
		return ;
	current = *stack;
	while (current != NULL)
	{
		aux = current->next;
		free(current);
		current = aux;
	}
	*stack = NULL;
}
