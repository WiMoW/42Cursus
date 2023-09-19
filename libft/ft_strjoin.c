/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:12:39 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/19 09:31:35 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t		j;
	char		*ptr;

	i = 0;
	j = 0;
	ptr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
#include <stdio.h>

int	main()
{
	char const	s1[] = "Hello ";
	char const	s2[] = "there";
	char		*dest;

	dest = ft_strjoin(s1, s2);
	printf("%s\n", dest);
	free(dest);
	return (0);
}
*/