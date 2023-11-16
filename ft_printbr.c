/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:17:58 by ahamalai          #+#    #+#             */
/*   Updated: 2023/11/16 14:10:51 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_printnbr(int n, int *len)
{
	if (n == -2147483648)
	{
		len += ft_putchar('-');
		len += ft_putchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		len += ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		ft_printnbr(n / 10);
		n = n % 10;
	}
	if (n < 10)
		len += ft_putchar(n + '0');
}
