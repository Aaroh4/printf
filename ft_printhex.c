/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:23:17 by ahamalai          #+#    #+#             */
/*   Updated: 2023/11/16 16:49:11 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count(int n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		n /= 16;
		count++;
	}
	return (count);
}

int	ft_printhex(unsigned int arg, char c)
{
	char *symbols;

	if (c == "X")
		symbols = "0123456789ABCDEF"
	else if (c == "x")
		symbols = "0123456789abcdef"
			
}
