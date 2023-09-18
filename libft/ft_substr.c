/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimo <wimo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:20:29 by wimo              #+#    #+#             */
/*   Updated: 2023/09/18 16:02:18 by wimo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*ptr;

	ptr = malloc(len + 1);
	i = 0;
	if ((s == NULL) || (start >= ft_strlen(s)))
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	while ((i < len) && (s[start] != '\0'))
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
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