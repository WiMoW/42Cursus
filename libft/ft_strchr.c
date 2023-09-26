/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:39:08 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/26 17:38:29 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)(s + i));
		i++;
	}
	if ((unsigned char)c == 0)
		return ((char *)(s + i));
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int	main()
{
	char	*str;
	char	*ptr;
	int		c;

	str = "teste";
	c = '\0';
	ptr = strchr(str, c);
	printf("strchr: %s\n", ptr);
	ptr = ft_strchr(str, c);
	printf("ft_strchr: %s\n", ptr);
	return (0);
}
*/