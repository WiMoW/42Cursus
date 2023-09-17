/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimo <wimo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:41:33 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/17 12:30:54 by wimo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0 && s[i] != c)
		i--;
	if (s[i] == c)
		return ((char *)s + i);
	else
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
	int		c;

	str = "Hello there";
	c = 'e';
	ptr = strrchr(str, c);
	printf("strrchr: %s\n", ptr);
	ptr = ft_strrchr(str, c);
	printf("ft_strrchr: %s\n", ptr);
	return (0);
}*/