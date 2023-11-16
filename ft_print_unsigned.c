/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:54:57 by ahamalai          #+#    #+#             */
/*   Updated: 2023/11/16 14:09:45 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_unsigned(unsigned int n, int *len)
{
	if (n > 9)
	{
		ft_print_unsigned(n / 10);
		n = n % 10;
	}
	if (n < 10)
		len += ft_putchar(n + '0');
}
