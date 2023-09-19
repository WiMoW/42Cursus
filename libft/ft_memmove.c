/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:00:31 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/19 09:28:18 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*destination;
	const char	*source;

	destination = dest;
	source = src;
	if ((destination == source) || (n == 0))
		return (dest);
	if ((source < destination) && (source + n > destination))
	{
		source += n;
		destination += n;
		while (n--)
			*(--destination) = *(--source);
	}
	else
	{
		while (n--)
			*destination++ = *source++;
	}
	return (dest);
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
	char str1[20];
    const char *str2 = "Hello there";

	memmove(str1, str2, 5);
	printf("str1 after memmove: %s\n", str1);
	ft_memmove(str1, str2, 5);
	printf("str1 after ft_memmove: %s\n", str1);
    return	(0);
}*/