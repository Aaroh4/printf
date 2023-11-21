/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:38:14 by ahamalai          #+#    #+#             */
/*   Updated: 2023/11/21 12:38:11 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		printing(va_list arg, char c);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		count(int n);
int		ft_printhex(long n, int base, char c);
int		ft_printptr(unsigned long n);

#endif
