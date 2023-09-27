/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 23:01:42 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/27 23:34:21 by dacaball         ###   ########.fr       */
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
int	main()
{
	t_list	*node = malloc(sizeof(t_list));
	node->content ="Hola";
	node->next = NULL;
	
	t_list	*node1 = malloc(sizeof(t_list));
	node1->content = "amigo";
	node1->next = NULL;

	node->next = node1;

	free(node);
	free(node1);
	return (0);
}
*/