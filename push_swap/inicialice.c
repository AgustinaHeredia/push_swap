/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inicialice.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:28:41 by agheredi          #+#    #+#             */
/*   Updated: 2023/10/13 13:30:05 by agheredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// funcion que convierte el argv en numeros, verificando que no son long

void	init_stack(char *argv, t_stack_node a)
{
	long	nbr;
	int		i;

	i = 1;
	while (argv)
	{
		nrb = ft_atol(argv[i];)
		if (nbr > INT_MAX || nbr < INT_MIN)
			ft_exit(-1);

	}
	//crear el stack con los argv de argv
	//verificar que los argumentos son validos
	//	-o hay valores duplicados
	//	-no hay vallores por encima o por debajo de int
	//	-no hay sintaxis erronea
}