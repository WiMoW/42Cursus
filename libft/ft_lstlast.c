/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 23:34:58 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/28 19:32:10 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}

/*
#include <stdio.h>

int	main()
{
	int		var1, var2, var3;
	t_list	*root;
	t_list	*new;
	
	//Creating linked list
	var1 = 15;
	var2 = 16;
	var3 = 17;
	root = ft_lstnew(&var1);
	root->next = ft_lstnew(&var2);
	root->next->next = ft_lstnew(&var3);
	
	//Printing content of each nonde using *current
	t_list	*current;
	current = ft_lstlast(root);
	printf("El contenido al que apunta el último nodo es: %d\n", *(int *)current->content);
	
	//Free the memory of each node
	t_list	*nextnode;
	current = root;
	while (current != NULL)
	{
		nextnode = current->next;
		free(current);
		current = nextnode;
	}
	return (0);
}
*/