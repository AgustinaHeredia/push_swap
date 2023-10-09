/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agheredi <agheredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:36:22 by agheredi          #+#    #+#             */
/*   Updated: 2023/10/09 15:17:08 by agheredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stacknew(int nb, int index)
{
	t_stack	*new;

	new = (t_stack *) malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->nb = nb;
	new->index = index;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (!*lst)
		*lst = new;
	else
	{
		while (temp -> next)
			temp = temp-> next;
		temp -> next = new;
	}
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		new -> next = *lst;
		*lst = new;
	}
	else
		*lst = new;
}

t_stack	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}
