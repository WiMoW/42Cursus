/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:47:41 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/28 19:19:21 by dacaball         ###   ########.fr       */
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
	int		var1, var2, var3, var4;
	t_list	*root;
	t_list	*new;
	
	//Creating linked list
	var1 = 15;
	var2 = 16;
	var3 = 17;
	var4 = 14;
	root = ft_lstnew(&var1);
	root->next = ft_lstnew(&var2);
	root->next->next = ft_lstnew(&var3);
	
	//Creating new and adding it to the fist node of the list
	new = ft_lstnew(&var4);
	ft_lstadd_front(&root, new);
	
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