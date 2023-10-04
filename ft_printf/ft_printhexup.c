/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:31:14 by dacaball          #+#    #+#             */
/*   Updated: 2023/10/04 22:30:18 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printhexup(unsigned int decimal, int *i)
{
	char const	base_hex[] = "0123456789ABCDEF";

	if (decimal >= 16)
	{
		ft_printhexup(decimal / 16, i);
	}
	ft_printchar_fd((char)base_hex[decimal % 16], i);
}
