/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:47:41 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/27 20:26:02 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
	}
}

/*
#include <stdio.h>

int	main()
{
	t_list	*list = NULL;

	t_list	*node = malloc(sizeof(t_list));
	node->content ="Hola";
	node->next = NULL;
	
	t_list	*node1 = malloc(sizeof(t_list));
	node1->content = "amigo";
	node->next = NULL;

	ft_lstadd_front(&list, node);
	ft_lstadd_front(&list, node1);
	
	t_list	*current = list;
	while (current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	while (list != NULL)
	{
		t_list	*aux = list;
		list = list->next;
		free (aux);
	}
	return (0);
}
+/