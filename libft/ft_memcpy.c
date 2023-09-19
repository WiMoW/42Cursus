/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:00:13 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/19 09:28:12 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*destination;
	const char	*source;

	destination = dst;
	source = src;
	i = 0;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (destination);
}

/*#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stddef.h>
#include <strings.h>
#include <stdlib.h>
#include "libft.h"

int main()
{
    char str1[20];
    const char *str2 = "Hello there";

	memcpy(str1, str2, 5);
	printf("str1 after memcpy: %s\n", str1);
	ft_memcpy(str1, str2, 5);
	printf("str1 after ft_memcpy: %s\n", str1);
    return	(0);
}*/