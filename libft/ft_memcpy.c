/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:00:13 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/14 12:00:15 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *ft_memcpy(void *dst, const void * src, size_t n)
{
    size_t i;
    char    *destination;
    const   char    *source;

    destination = dst;
    source = src;
    i = 0;
    while (i < n)
    {
        destination[i] = source[i];
        i++;
    }
    return (destination);
}
