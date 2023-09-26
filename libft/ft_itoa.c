/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:37:24 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/26 11:23:47 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>
#include "libft.h"

char	*ft_mystrdup(const char *s1)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = malloc(sizeof(char) * 13);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

static char	*ft_allocmemory(size_t size, int n)
{
	char	*allocated;

	if (n > 0)
		allocated = malloc(sizeof(char) * (size + 1));
	if (n <= 0)
		allocated = malloc(sizeof(char) * (size + 2));
	return (allocated);
}

static char	*ft_writezero(char *converted, int n, int i)
{
	converted[i + 1] = '\0';
	converted[i] = n + '0';
	return (converted);
}

static char	*ft_writenum(char *converted, int n, int i)
{
	if (n > 0)
	{
		converted [i] = '\0';
		i--;
		while (i >= 0)
		{
			converted[i--] = (n % 10) + '0';
			n /= 10;
		}
	}
	if (n < 0)
	{
		converted [i + 1] = '\0';
		while (i > 0)
		{
			converted[i--] = (-n % 10) + '0';
			n /= 10;
		}
		converted[0] = '-';
	}
	return (converted);
}

char	*ft_itoa(int n)
{
	size_t		size;
	long int	aux;
	char		*converted;
	int			i;

	size = 0;
	if (n == -2147483648)
		return (ft_mystrdup("-2147483648"));
	if (n >= 0)
		aux = n;
	if (n < 0)
		aux = -n;
	while (aux > 0)
	{
		aux /= 10;
		size++;
	}
	i = size;
	converted = ft_allocmemory(size, n);
	if (!converted)
		return (NULL);
	if (n == 0)
		return (ft_writezero(converted, n, i));
	converted = ft_writenum(converted, n, i);
	return (converted);
}

/*
#include <stdio.h>

int	main()
{
	char	*converted;

	converted = ft_itoa(-2147483648LL);
	printf("%s\n", converted);
	return (0);
}
*/