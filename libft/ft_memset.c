/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:38:47 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/19 09:28:25 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
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
	char	str[] = "Hello there";
	char	*ptr;
	int		c;
	int		n;

	c = 'a';
	n = 5;
	ptr = memset(str, c, n);
	printf("memset: %s\n", ptr);
	ptr = ft_memset(str, c, n);
	printf("ft_memset: %s\n", ptr);
	return (0);
}*/