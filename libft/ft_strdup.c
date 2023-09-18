/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimo <wimo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:20:41 by wimo              #+#    #+#             */
/*   Updated: 2023/09/18 16:04:14 by wimo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = malloc(sizeof(s1));
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*
#include <string.h>
#include <stdio.h>

int	main()
{
	char	string[] = "";
	char	*ptr;

	ptr = strdup(string);
	printf("%s\n", ptr);
	printf("strdup: %lu\n", ft_strlen(ptr));
	free(ptr);
	ptr = ft_strdup(string);
	printf("%s\n", ptr);
	printf("ft_strdup: %lu\n", ft_strlen(ptr));
	free(ptr);
	return (0);
}
*/