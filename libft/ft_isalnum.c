/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:51:15 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/15 13:12:39 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	int	is_alnum;

	is_alnum = 0;
	if (((c >= 'a') && (c <= 'z'))
		|| ((c >= 'A') && (c <= 'Z')) || ((c >= '0') && (c <= '9')))
		is_alnum = 1;
	else
		is_alnum = 0;
	return (is_alnum);
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