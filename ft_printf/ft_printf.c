/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:23:10 by dacaball          #+#    #+#             */
/*   Updated: 2023/10/02 13:37:10 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *to_print, ...)
{
	va_list	args;
	int	i;

	i = 0;
	va_start(args, to_print);
	while (to_print)
	{
		if (to_print[i] == '%')
			check_format(*(++to_print), args, &i);
		else
			putchar_fd(*to_print, &i);
	}
}