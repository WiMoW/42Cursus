/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacaball <dacaball@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:23:16 by dacaball          #+#    #+#             */
/*   Updated: 2023/10/03 21:58:20 by dacaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(char const *str, ...);

void	ft_printstr(char *str, int *i);
void	ft_printchar_fd(char chr, int *i);
void	ft_printhexlow(unsigned int	decimal, int *i);

#endif
