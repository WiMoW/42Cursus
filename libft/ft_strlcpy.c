/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:40:03 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/14 11:40:06 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t  ft_strlen(const char *s);

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    unsigned    long    i;

    i = 0;
    if (size != 0)
    {
        while ((src[i] != '\0') && (i < size - 1))
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (ft_strlen(src));
}
