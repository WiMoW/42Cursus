/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:39:42 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/19 09:28:51 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned long	i;
	unsigned long	j;

	i = 0;
	j = 0;
	while ((dst[i] != '\0') && (i < size))
		i++;
	while ((src[j] != '\0') && (i + j + 1 < size))
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
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
	char	*src;
	char	*dst;
	size_t	size;

	src = "Hello ";
	dst = "there";
	size = 5;
	printf("strlcat: %lu\n", strlcat(dst, src, size));
	printf("ft_strlcat: %lu\n", ft_strlcat(dst, src, size));
	return (0);
}*/