/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:32:23 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/22 16:46:02 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_wordcount(const char *s, char c)
{
	size_t	i;
	size_t	count;
	char	last;

	count = 0;
	i = 0;
	last = c;
	while ((s[i]) != '\0')
	{
		if ((last == c) && ((s[i]) != c))
			count++;
		last = s[i];
		i++;
	}
	return (count);
}

static size_t	ft_strsublen(const char *str, char c)
{
	size_t	i;

	i = 0;
	while ((str[i] != '\0') && (str[i] != c))
		i++;
	return (i);
}

static char	**ft_freeseparated(char **separated, size_t j)
{
	while (j >= 0)
	{
		free(separated[(j)]);
		j--;
	}
	free(separated);
	return (NULL);
}

static size_t	ft_cpywrd(char **separated, const char *s, size_t j, size_t len)
{
	size_t	k;

	k = 0;
	while (k < len)
	{
		separated[j][k] = s[k];
		k++;
	}
	separated[j][k] = '\0';
	return (k);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	j;
	char	**separated;
	size_t	sublen;

	i = 0;
	j = 0;
	separated = malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	if (!separated || (c == '\0'))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		sublen = ft_strsublen(s + i, c);
		separated[j] = malloc((sublen + 1) * sizeof(char));
		if (!separated[j])
			return (ft_freeseparated(separated, j));
		i += ft_cpywrd(separated, s + i, j, sublen);
		j++;
	}
	separated[j] = NULL;
	return (separated);
}
/*
#include <stdio.h>

int    main(void)
{
	char	*string = "Hola k ase";
	char	**separated;
	size_t        i;

	i = 0;
	separated = ft_split(string, ' ');
	if (separated == NULL) {
		printf("Memory allocation failed.\n");
		return 1;
	}
	while (separated[i])
	{
	  printf("%s\n", separated[i]);
	  i++;
	}
	free(separated);
	return (0);
}
*/