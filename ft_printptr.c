/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:57:43 by ahamalai          #+#    #+#             */
/*   Updated: 2023/11/16 15:11:19 by ahamalai         ###   ########.fr       */
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

int	*ft_printptr(unsigned long long n)
{
	char		*str;
	int			i;
	long int	num;

	i = count(n);
	num = n;
	str = (char *)malloc(i + 1);
	if (str == 0)
		return (0);
	str[i] = '\0';
	if (num < 0)
		num *= -1;
	while (i > 0)
	{
		i--;
		str[i] = (num % 16) + '0';
		num = num / 16;
	}
	return (ft_putstr(str));
}
