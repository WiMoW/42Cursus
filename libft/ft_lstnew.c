/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:13:40 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/28 19:13:24 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (node);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*
#include <stdio.h>

int	main()
{
	int		var1, var2, var3;
	t_list	*root;
	
	//Creating linked list
	var1 = 15;
	var2 = 16;
	var3 = 17;
	root = ft_lstnew(&var1);
	root->next = ft_lstnew(&var2);
	root->next->next = ft_lstnew(&var3);
	
	
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