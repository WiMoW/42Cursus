/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:41:03 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/19 09:29:10 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	while ((big[i] != '\0') && (i < len))
	{
		while ((big[i + j] == little[j])
			&& (little[j] != '\0') && (i + j < len))
			j++;
		if (little[j] == '\0')
			return ((char *)big + i);
		j = 0;
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
	char	*big;
	char	*little;
	size_t	len;

	big = "Hello there";
	little = "there";
	len = 5;
	printf("strnstr: %s\n", strnstr(big, little, len));
	printf("ft_strnstr: %s\n", ft_strnstr(big, little, len));
	return (0);
}*/