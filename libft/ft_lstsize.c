/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 23:01:42 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/28 19:24:56 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*
#include <stdio.h>

int	main()
{
	int		var1, var2, var3, var4, i;
	t_list	*root;
	t_list	*new;
	
	//Creating linked list
	i = 0;
	var1 = 15;
	var2 = 16;
	var3 = 17;
	var4 = 14;
	root = ft_lstnew(&var1);
	root->next = ft_lstnew(&var2);
	root->next->next = ft_lstnew(&var3);

	//Print size before adding node
	i = ft_lstsize(root);
	printf("La lista antes de añadir un nodo al principio tiene %d nodos\n", i);
	
	//Creating new and adding it to the fist node of the list
	new = ft_lstnew(&var4);
	ft_lstadd_front(&root, new);
	
	//Print size after adding node
	i = ft_lstsize(root);
	printf("La lista después de añadir un nodo al principio tiene %d nodos\n", i);
	
	//Printing content of each nonde using *current
	t_list	*current;
	current = root;
	while (current != NULL)
	{
		printf("%d\n", *(int *)current->content);
		current = current->next;
	}
	
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