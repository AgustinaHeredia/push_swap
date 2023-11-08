/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inicialice.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:28:41 by agheredi          #+#    #+#             */
/*   Updated: 2023/11/08 11:16:50 by agheredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_char(char *argv)
{
	if (!(*argv == '+' || *argv == '-'
			|| (*argv >= '0' && *argv <= '9')))
		return (1);
	if ((*argv == '+' || *argv == '-')
		&& !(argv[1] >= '0' && argv[1] <= '9'))
		return (1);
	while (*++argv)
	{
		if (!(*argv >= '0' && *argv <= '9'))
			return (1);
	}
	return (0);
}

int	check_no_duplicate(t_stack_node **a, int nbr)
{
	t_stack_node	*current;

	current = *a;
	while (current != NULL)
	{
		if (current->value == nbr)
			return (1);
		current = current->next;
	}
	return (0);
}

void	init_stack(char **argv, t_stack_node **a, int flag_argv)
{
	long long	nbr;
	int			i;
	int			flag;

	i = 1;
	while (argv[i] != 0)
	{
		if (check_char(argv[i]) == 1)
			ft_exit(flag_argv, argv);
		nbr = ft_atol(argv[i]);
		if (nbr > INT_MAX || nbr < INT_MIN)
			ft_exit(flag_argv, argv);
		flag = check_no_duplicate(a, (int)nbr);
		if (flag == 1)
			ft_exit(flag_argv, argv);
		add_nb_stack(a, (int)nbr, flag_argv, argv);
		i++;
	}
	if (flag_argv == 1)
		free_argv(argv);
}

void	iteri_index(t_stack_node **a)
{
	int				index;
	t_stack_node	*current;

	if (a == NULL)
		return ;
	current = (*a);
	while (current != NULL)
	{
		index = index_node(a, current->value);
		if (index == -1)
			return ;
		current->index = index;
		current = current->next;
	}
}
