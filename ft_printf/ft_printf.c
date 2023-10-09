/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:23:10 by dacaball          #+#    #+#             */
/*   Updated: 2023/10/09 11:09:34 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	check_format(char chr, va_list args, int *i)
{
	if (chr == 'c')
		ft_printchar_fd(va_arg(args, int), i);
	else if (chr == 's')
		ft_printstr(va_arg(args, char *), i);
	else if (chr == 'p')
		ft_printptr(va_arg(args, size_t), i);
	else if (chr == 'd')
		ft_printdec(va_arg(args, int), i);
	else if (chr == 'i')
		ft_printdec(va_arg(args, int), i);
	else if (chr == 'u')
		ft_printunsigned(va_arg(args, unsigned int), i);
	else if (chr == 'x')
		ft_printhexlow(va_arg(args, unsigned int), i);
	else if (chr == 'X')
		ft_printhexup(va_arg(args, unsigned int), i);
	else if (chr == '%')
		ft_printchar_fd('%', i);
}

int	ft_printf(char const *to_print, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, to_print);
	while (*to_print)
	{
		if (*to_print == '%')
			check_format(*(++to_print), args, &i);
		else
			ft_printchar_fd(*to_print, &i);
		to_print++;
	}
	va_end(args);
	return (i);
}
/*
#include <stdio.h>

int	main()
{
	printf("%i\n", printf("%i\n", -13145));
	ft_printf("%i\n", ft_printf("%i\n", -13145));

	return (0);
}
*/