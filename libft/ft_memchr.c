/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:45:38 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/14 11:45:40 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int			i;
	const char	*string;

	i = 0;
	string = s;
	while (i < n)
	{
		if (string[i] == c)
			return ((void *)(string + 1));
		i++;
	}
	return (0);
}