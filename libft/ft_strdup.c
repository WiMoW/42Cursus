/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:20:41 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/26 11:51:46 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = malloc(sizeof(const char) * (ft_strlen(s1) + 1));
	if (ptr == NULL)
		return (ptr);
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