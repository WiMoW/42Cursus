/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 20:19:18 by dacaball          #+#    #+#             */
/*   Updated: 2023/10/03 20:30:59 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printstr(char *str, int *i)
{
	if (!str)
	{
		write(1, "(null)", 6);
		i += 6;
		return;
	}
	while (*str)
	{
		ft_printchar_fd(*str, i);
		*str++;
	}
}