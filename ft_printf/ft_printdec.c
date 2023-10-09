/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:24:57 by dacaball          #+#    #+#             */
/*   Updated: 2023/10/09 10:48:33 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printdec(long long int decimal, int *i)
{
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
