/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:35:49 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/20 19:09:37 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

static size_t    ft_wordcount(const char *s, char c, size_t *index)
{
    int    count;
    
    count = 0;
    while (s[*index] != '\0')
    {
        while ((s[*index] == c) && (s[*index] != '\0'))
            (*index)++;
        if (s[*index] != '\0')
        {
            count++;
            while ((s[*index] != c) && (s[*index] != '\0'))
                (*index)++;
        }
    }
    *index = 0;
    return (count);
}

static size_t    wordsize(char const *s, char c, size_t *index)
{
    size_t    size;

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


char    **ft_split(char const *s, char c)
{
    size_t    words;
    size_t    i;
    size_t    j;
    size_t    k;
    size_t    index;
    size_t    size;
    char    **separated;

    index = 0;
    i = 0;
    j = 0;
    k = 0;
    words = ft_wordcount(s, c, &index);
    if (words <= 0)
        return (NULL);
    separated = malloc((words + 1) * sizeof(char *));
    if (!separated)
        return (NULL);
    while (s[index])
    {
        size = wordsize(s, c, &index);
        while ((s[index] == c) && (s[index]))
            index++;
        separated[j] = malloc((size + 1) * sizeof(char));
        if (!separated[j])
        {
            while (i < j)
            {
                free(separated[i]);
                i++;
            }
            free(separated);
            return (NULL);
        }
        while (k < size)
        {
            if (s[i] == c)
                i++;
            else
            {
                separated[j][k] = s[i];
                k++;
                i++;
            }
        }
        separated[j][k] = '\0';
        k = 0;
        i++;
        j++;
    }
    return (separated);
}

#include <stdio.h>

int    main(void)
{
    char const    string[] = "HOLA QUE TAL";
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
