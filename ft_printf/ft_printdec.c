/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:24:57 by dacaball          #+#    #+#             */
/*   Updated: 2023/10/05 16:45:01 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printdec(int decimal, int *i)
{	
	if (decimal == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	if (decimal < 0)
	{
		ft_printchar_fd('-', i);
		decimal = -decimal;
		ft_printdec(decimal, i);
	}
	else if (decimal > 9)
	{
		ft_printdec(decimal / 10, i);
		ft_printchar_fd((char)(decimal % 10 + '0'), i);
	}
	else
	{
		ft_printchar_fd((char)(decimal + '0'), i);
	}
}
