/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:39:42 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/14 11:39:47 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned long	i;
	unsigned long	j;

	i = 0;
	j = 0;
	while ((dst[i] != '\0') && (i < size))
		i++;
	while ((src[j] != '\0') && (i + j + 1 < size))
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
