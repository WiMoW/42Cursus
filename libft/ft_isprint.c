/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:02:31 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/15 13:12:56 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	int	is_print;

	is_print = 0;
	if ((c >= 32) && (c <= 126))
		is_print = 1;
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

char	*ft_strnstr(const char *big, const char *little, size_t len);

int	main()
{
	char	grande[] = "Hello there";
	char	peque[] = "lo";

	printf("strnstr: %s\n", strnstr(grande, peque, 8));
	printf("ft_strnstr: %s\n", ft_strnstr(grande, peque, 8));
	return (0);
}*/