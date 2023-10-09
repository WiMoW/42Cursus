/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:23:16 by dacaball          #+#    #+#             */
/*   Updated: 2023/10/09 11:08:17 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(char const *str, ...);

void	ft_printstr(char *str, int *i);
void	ft_printchar_fd(char chr, int *i);
void	ft_printhexlow(long long unsigned decimal, int *i);
void	ft_printhexup(long long unsigned decimal, int *i);
void	ft_printptr(size_t	ptr, int *i);
void	ft_printdec(long long int decimal, int *i);
void	ft_printunsigned(unsigned int decimal, int *i);

#endif
