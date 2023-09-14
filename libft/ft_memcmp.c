/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:46:03 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/14 11:46:06 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    const   char    *str1;
    const   char    *str2;

    str1 = s1;
    str2 = s2;
    i = 0;
    while (i < n)
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (0);
}
