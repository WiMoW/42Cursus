/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:13:40 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/27 19:59:14 by dacaball         ###   ########.fr       */
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
int	main()
{
	int 	data1 = 42;
	int 	data2 = 43;
	t_list	*node1;
	t_list	*node2;

	node1 = ft_lstnew(&data1);
	node2 = ft_lstnew(&data2);
	node1->next = node2;
	free(node1);
	free(node2);
	return (0);
}
*/