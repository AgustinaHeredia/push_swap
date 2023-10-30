/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:38:48 by agheredi          #+#    #+#             */
/*   Updated: 2023/10/30 17:47:09 by agheredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int				flag_argv;
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	flag_argv = 0;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	if (argc == 2)
	{
		printf("%s\n", argv[1]);
		argv = ft_split(argv[1], ' ');
		flag_argv = 1;
	}
	init_stack(argv, &a, flag_argv);
	if (stack_sorted(&a) == 1)
	{
		printf("hay que ordenar\n");
	}
	else
		printf("NO hay que ordenar\n");
	//	algoritmos de ordencion
	//liberar los stack
	return (0);
}
