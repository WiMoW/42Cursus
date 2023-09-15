/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:00:31 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/15 13:13:09 by dacaball         ###   ########.fr       */
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

char	*ft_strnstr(const char *big, const char *little, size_t len);

int	main()
{
	char	grande[] = "Hello there";
	char	peque[] = "lo";

	printf("strnstr: %s\n", strnstr(grande, peque, 8));
	printf("ft_strnstr: %s\n", ft_strnstr(grande, peque, 8));
	return (0);
}*/