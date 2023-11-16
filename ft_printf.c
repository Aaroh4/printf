/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:44:05 by ahamalai          #+#    #+#             */
/*   Updated: 2023/11/16 16:29:30 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar(char c)
{
	write(1, c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}



int	printing(va_list arg, char c)
{
	int	len;

	if (c == 'c')
		len += ft_putchar(va_arg(arg, int));
	else if (c == 's')
		len += ft_putstr(va_arg(arg, char *));
	else if (c == 'p')
		len +=
	else if (c == 'd' || c == 'i')
		ft_printnbr(va_arg(arg, int), len);
	else if (c == 'u')
		ft_print_unsigned(va_arg(arg, unsigned int), len);
	else if (c == 'x')
		len += ft_printhex(va_arg(arg, unsigned nt), c);
	else if (c == 'X')
	
	else if (c == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int	i;
	int	len;

	i = 0;
	va_start(arg, str);
	while(str[i])
	{
		if (str[i] == '%')
		{
			len += printing(arg, str[i + 1]);
			i++;
		}
		else 
			len += ft_putchar(va_arg(arg, len));
		i++;
	}
}
