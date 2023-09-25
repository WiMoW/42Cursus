/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:37:24 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/25 20:42:05 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>

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
	size_t	size;
	int		aux;
	char	*converted;
	int		i;

	size = 0;
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


#include <stdio.h>

int	main()
{
	char	*converted;

	converted = ft_itoa(-2147483648);
	printf("%s\n", converted);
	return (0);
}
