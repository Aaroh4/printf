/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:44:05 by ahamalai          #+#    #+#             */
/*   Updated: 2023/11/17 15:09:56 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printing(va_list arg, char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(arg, int));
	else if (c == 's')
		len += ft_putstr(va_arg(arg, char *));
	//else if (c == 'p')
	//	len +=
	else if (c == 'd' || c == 'i')
		ft_printnbr(va_arg(arg, int), &len);
	else if (c == 'u')
		ft_print_unsigned(va_arg(arg, unsigned int), &len);
	else if (c == 'x' || c == 'X')
		len += ft_printhex(va_arg(arg, unsigned int), c);
	else
		len += write(1, &c, 1);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int	i;
	int	len;

	i = 0;
	va_start(arg, str);
	while(*str != '\0')
	{
		if (*str == '%')
			len = printing(arg, *(++str));
		else if ((' ' >= *str || *str <= '~')
			|| ('\t' >= *str || *str <= '\r'))
			len = write(1, str, 1);
		else 
			i++;
		if (len < 0)
			return (-1);
		i += len;
		str++;
	}
	va_end(arg);
	return (i);
}
