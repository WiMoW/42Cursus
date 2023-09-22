/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:35:49 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/22 13:53:49 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

struct s_vars {
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	index;
	size_t	size;
	size_t	words;
}

static size_t	ft_wordcount(const char *s, char c, size_t *index)
{
	int		count;
	char	last;

	count = 0;
	last = c;
	while (s[*index] != '\0')
	{
		if ((last == c) && (s[*index] != c))
			count++;
		last = s[*index];
		(*index)++;
	}
	*index = 0;
	return (count);
}

static size_t	wordsize(char const *s, char c, size_t *index)
{
	size_t	size;

	size = 0;
	while (s[*index] == c)
		(*index)++;
	while ((s[*index] != '\0') && (s[*index] != c))
	{
		size++;
		(*index)++;
	}
	return (size);
}

static char	**ft_freeseparated(char **separated, size_t *i, size_t *j)
{
	while ((*i) < (*j))
	{
		free(separated[(*i)]);
		(*i)++;
	}
	free(separated);
	return (NULL);
}

static void	ft_cpywrd(char **separated, const char *s, struct s_vars *vars,
char c)
{
	while ((vars->k) < (vars->size))
	{
		if (s[(vars->i)] == c)
			(vars->i)++;
		else
		{
			separated[(vars->j)][(vars->k)] = s[(vars->i)];
			(vars->k)++;
			(vars->i)++;
		}
	}
	separated[vars->j][vars->k] = '\0';
	vars->k = 0;
}

char	**ft_split(char const *s, char c)
{
	struct s_vars	vars;
	char			**separated;

	vars.index = 0;
	vars.i = 0;
	vars.j = 0;
	vars.k = 0;
	vars.words = ft_wordcount(s, c, &vars.index);
	separated = malloc((vars.words + 1) * sizeof(char *));
	if (!separated || (c == '\0'))
		return (NULL);
	while (s[vars.index])
	{
		vars.size = (wordsize(s, c, &vars.index));
		while ((s[vars.index] == c) && (s[vars.index]))
			vars.index++;
		separated[vars.j] = malloc((vars.size + 1) * sizeof(char));
		if (!separated)
			return (ft_freeseparated(separated, &vars.i, &vars.j));
		ft_cpywrd(separated, s, &vars, c);
		if (s[vars.index] != '\0')
			vars.j++;
	}
	separated[vars.j] = NULL;
	return (separated);
}
/*
#include <stdio.h>

int    main(void)
{
	char const    string[] = "Hola k ase";
	char        **separated;
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