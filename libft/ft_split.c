/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:35:49 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/21 22:22:19 by dacaball         ###   ########.fr       */
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
};

static size_t	ft_wordcount(const char *s, char c, size_t *index)
{
	int	count;

	count = 0;
	while (s[*index] != '\0')
	{
		while ((s[*index] == c) && (s[*index] != '\0'))
			(*index)++;
		if ((s[*index] != c) || ((s[*index] != '\0')
				&& ((s[*index] - 1) == c)))
			count++;
		while ((s[*index] != c) && (s[*index] != '\0'))
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

void	ft_freeseparated(char **separated, size_t *i, size_t *j)
{
	if (!separated[(*j)])
	{
		while ((*i) < (*j))
		{
			free(separated[(*i)]);
			(*i)++;
		}
		free(separated);
	}
}

void	ft_cpywrd(char **separated, const char *s, struct s_vars *vars, char c)
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
	if (!separated || (vars.words == 0) || (c == '\0'))
		return (NULL);
	while (s[vars.index])
	{
		vars.size = (wordsize(s, c, &vars.index));
		while ((s[vars.index] == c) && (s[vars.index]))
			vars.index++;
		separated[vars.j] = malloc((vars.size + 1) * sizeof(char));
		ft_freeseparated(separated, &vars.i, &vars.j);
		ft_cpywrd(separated, s, &vars, c);
		separated[vars.j][vars.k] = '\0';
		vars.k = 0;
		vars.i++;
		vars.j++;
	}
	return (separated);
}

#include <stdio.h>

int    main(void)
{
	char const    string[] = "hello!";
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
