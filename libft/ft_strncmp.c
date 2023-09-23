/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:40:42 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/23 14:49:35 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((s1[i] == '\0') || (s2[i] == '\0'))
		{
			if (s1[i] == s2[i])
				return (0);
			else
				return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
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
	char	*str1;
	char	*str2;
	size_t		n;

	str1 = "test\200";
	str2 = "test\0";
	n = 6;
	printf("strncmp: %d\n", strncmp(str1, str2, n));
	printf("ft_strncmp: %d\n", ft_strncmp(str1, str2, n));
	return (0);
}*/