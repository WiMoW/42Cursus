/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 23:38:24 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/29 11:44:41 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst)
	{
		if (*lst)
		{
			last = ft_lstlast(*lst);
			last->next = new;
		}
		else
			*lst = new;
	}
}

/*
#include <stdio.h>

int	main()
{
	int		var1;
	int		var2;
	int		var3;
	int		var4;
	t_list	*root;
	t_list	*new;
	
	//Creating linked list
	var1 = 15;
	var2 = 16;
	var3 = 17;
	var4 = 18;
	root = ft_lstnew(&var1);
	root->next = ft_lstnew(&var2);
	root->next->next = ft_lstnew(&var3);
	
	//Creating new node and adding it to the end of the list
	new = ft_lstnew(&var4);
	ft_lstadd_back(&root, new);
	
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