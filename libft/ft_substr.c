/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:20:29 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/26 17:21:41 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*ptr;
	
	i = 0;
	if (!s)
		return (0);
	size = ft_strlen(s);
	if (start >= size)
		return (ft_strdup(""));
	if (len > size - start)
		len = size - start;
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (ptr);
	while (i < len && s[start + i])
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*
#include <stdio.h>

int	main()
{
	char const	string[] = "Mondongo";
	char		*substring;

	substring = ft_substr(string, 5, 6);
	printf("Original string: %s\n", string);
	printf("Substring: %s\n", substring);
	printf("Length: %lu\n", ft_strlen(substring));
	free(substring);
	return (0);
}
*/