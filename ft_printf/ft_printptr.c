/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 20:35:02 by dacaball          #+#    #+#             */
/*   Updated: 2023/10/05 11:59:14 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printptr(size_t	ptr, int *i)
{
	ft_printchar_fd('0', i);
	ft_printchar_fd('x', i);
	ft_printhexlow(ptr, i);
}
