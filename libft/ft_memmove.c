/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:00:31 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/14 12:00:33 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    char    *destination;
    const   char    *source;

    destination = dest;
    source = src;
    if ((destination == source) || (n == 0))
        return (dest);
    if ((source < destination) && (source + n > destination))
    {
        source += n;
        destination += n;
        while (n--)
            *(--destination) = *(--source);
    }
    else
    {
        while (n--)
            *destination++ = *source++;
    }
    return (dest);
}
