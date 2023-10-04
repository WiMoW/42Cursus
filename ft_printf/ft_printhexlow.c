/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexlow.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 22:30:07 by dacaball          #+#    #+#             */
/*   Updated: 2023/10/04 22:30:28 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printhexlow(unsigned int decimal, int *i)
{
	char const	base_hex[] = "0123456789abcdef";

	if (decimal >= 16)
	{
		ft_printhexlow(decimal / 16, i);
	}
	ft_printchar_fd((char)base_hex[decimal % 16], i);
}
