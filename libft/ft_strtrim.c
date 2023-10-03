/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:03:52 by dacaball          #+#    #+#             */
/*   Updated: 2023/10/03 16:02:44 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strrchr((char *)set, s1[i]))
		i++;
	while (j > i && ft_strrchr((char *)set, s1[j]))
		j--;
	return (ft_substr(s1, i, j - i + 1));
}

/*
#include <stdio.h>

int main()
{
	char *s1 = "abcd";
	char *set = "";
	char *ptr;

	ptr = ft_strtrim(s1, set);
	printf("ft_strtrim: %s\n", ptr);
	free(ptr);
	return (0);
}
*/
