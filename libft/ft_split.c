/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:35:49 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/19 19:35:11 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft,h"

static size_t	ft_wordcount(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (s[i] != c)
		count++;
	while (s[i])
	{
		if ((s[i] == c) && (s[i + 1] != c))
			count++;
		i++;
	}
	return (count);
}

static size_t	wordsize(char const *s, char c)
{
	size_t	i;

	i = 0;
	while ((str[i] != '\0') || (str[i] != c))
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	size_t	i;
	size_t	j;
	size_t	k;
	char	**separated;

	i = 0;
	j = 0;
	k = 0;
	words = ft_wordcount(s, c);
	if (words <= 0)
		return (NULL);
	separated = malloc((words + 1) * sizeof(char *));
	if (!separated)
		return (NULL);
	while (s[i] != NULL)
	{
		while ((s[i] == c) && (s[i] != NULL))
			i++;
		separated[j] = malloc((wordsize(s, c) + 1) * sizeof(char));
		if (!separated[j])
			return (NULL);
		while ((s[i] != c) && (s[i] != NULL))
		{
			separated[j][k] = s[i];
			k++;
		}
		j++;
		i++;
	}
	separated[i][k] = '\0';
	return (separated);
}
