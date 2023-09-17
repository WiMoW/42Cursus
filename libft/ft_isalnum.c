/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimo <wimo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:51:15 by dacaball          #+#    #+#             */
/*   Updated: 2023/09/17 12:55:57 by wimo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	int	is_alnum;

	is_alnum = 0;
	if (((c >= 'a') && (c <= 'z'))
		|| ((c >= 'A') && (c <= 'Z')) || ((c >= '0') && (c <= '9')))
		is_alnum = 8;
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

int	main()
{
	char	c;

	c = 'a';
	printf("isalnum: %d\n", isalnum(c));
	printf("ft_isalnum: %d\n", ft_isalnum(c));
	return (0);
}*/