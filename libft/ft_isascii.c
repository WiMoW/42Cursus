/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:09:24 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/19 09:27:45 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	int	is_ascii;

	is_ascii = 0;
	if ((c >= 0) && (c <= 127))
		is_ascii = 1;
	else
		is_ascii = 0;
	return (is_ascii);
}

/*#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stddef.h>
#include <strings.h>
#include <stdlib.h>
#include "libft.h"

int	main()
{
	char	c;

	c = 'a';
	printf("isascii: %d\n", isascii(c));
	printf("ft_isascii: %d\n", ft_isascii(c));
	return (0);
}*/