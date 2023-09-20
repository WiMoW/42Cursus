/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:03:52 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/19 20:09:11 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = ft_strlen(s1);
	k = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && (ft_strchr((char *)set, s1[i])))
		i++;
	while ((j > i) && (ft_strchr((char *)set, s1[j])))
		j--;
	dest = (char *)malloc(sizeof(char) * (j - i + 2));
	if (dest == NULL)
		return (NULL);
	while (i <= j)
		dest[k++] = s1[i++];
	dest[k] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int main()
{
	char *s1 = "Hello there";
	char *set = "He";
	char *ptr;

	ptr = ft_strtrim(s1, set);
	printf("ft_strtrim: %s\n", ptr);
	free(ptr);
	return (0);
}
*/