/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexlow.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:12:46 by dacaball          #+#    #+#             */
/*   Updated: 2023/10/04 13:30:01 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printhexlow(unsigned int decimal, int *i)
{
	char const	base_hex[] = "0123456789abcdef";

	if (decimal > 16)
	{
		ft_printhexlow(decimal / 16, i);
	}
	ft_printchar_fd((char)base_hex[decimal % 16], i);
}
