/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimo <wimo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:00:13 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/17 12:25:58 by wimo             ###   ########.fr       */
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

int	main()
{
	char	*str1;
	char	*str2;
	int		n;

	str1 = "Hello there";
	str2 = "General Kenobi";
	n = 5;
	printf("memcpy: %s\n", memcpy(str1, str2, n));
	printf("ft_memcpy: %s\n", ft_memcpy(str1, str2, n));
	return (0);
}*/