/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:45:38 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/19 09:28:01 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
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

/*#include <stdio.h>
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

	str = "Hello there";
	c = 'e';
	ptr = memchr(str, c, 5);
	printf("memchr: %s\n", ptr);
	ptr = ft_memchr(str, c, 5);
	printf("ft_memchr: %s\n", ptr);
	return (0);
}*/