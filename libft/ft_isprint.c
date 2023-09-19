/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:02:31 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/19 09:27:56 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	int	is_print;

	is_print = 0;
	if ((c >= 32) && (c <= 126))
		is_print = 16384;
	else
		is_print = 0;
	return (is_print);
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
	printf("isprint: %d\n", isprint(c));
	printf("ft_isprint: %d\n", ft_isprint(c));
	return (0);
}*/