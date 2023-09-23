/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:45:38 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/23 15:05:07 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*string;

	i = 0;
	string = (char *)s;
	while (i < n)
	{
		if (*(string + i) == (char)c)
			return (string + i);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stddef.h>
#include <strings.h>
#include <stdlib.h>
#include "libft.h"

int	main()
{
	char	*str;
	char	*ptr;
	char	c;

	str = "bonjour";
	c = 'j';
	ptr = memchr(str, c, 5);
	printf("memchr: %s\n", ptr);
	ptr = ft_memchr(str, c, 5);
	printf("ft_memchr: %s\n", ptr);
	return (0);
}
*/