/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimo <wimo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:00:31 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/17 12:26:28 by wimo             ###   ########.fr       */
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
	char	*str1;
	char	*str2;
	int		n;

	str1 = "Hello there";
	str2 = "General Kenobi";
	n = 5;
	printf("memmove: %s\n", memmove(str1, str2, n));
	printf("ft_memmove: %s\n", ft_memmove(str1, str2, n));
	return (0);
}*/