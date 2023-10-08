/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:04:30 by dacaball          #+#    #+#             */
/*   Updated: 2023/10/08 13:14:39 by wimo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printunsigned(unsigned int decimal, int *i)
{
	if (decimal > 9)
	{
		ft_printdec(decimal / 10, i);
		ft_printchar_fd((char)(decimal % 10 + '0'), i);
	}
	else
	{
		ft_printchar_fd((char)(decimal + '0'), i);
	}
}
