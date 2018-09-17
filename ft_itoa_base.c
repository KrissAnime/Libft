/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <cbester@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 10:03:34 by exam              #+#    #+#             */
/*   Updated: 2018/09/14 10:22:05 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *min(int base, int value)
{
	char *s;

	if (value == 0)
	{
		if (!(s = (char *)malloc(sizeof(2))))
			return (NULL);
		s = "0\0";
	}
	else if (base == 10 && value == -2147483648)
	{
		if (!(s = (char *)malloc(sizeof(12))))
			return (NULL);
		s = "-2147483648";
	}
	else
	{
		if (!(s = (char *)malloc(sizeof(9))))
			return (NULL);
		s = "FFFFFFFF";
	}
	return (s);
}

char *ft_itoa_base(int value, int base)
{
	char *str;
	int i;
	char *check;

	i = 0;
	if (value == 0 || value == -2147483648)
		return (min(base, value));
	if (!(str = (char *)malloc(sizeof(int) * ft_numlen_base(value, base))))
		return (NULL);
	check = "0123456789ABCDEF";
	if (base == 10 && value < 0)
		str[i++] = '-';
	if (value < 0)
		value *= -1;
	while (value > 0)
	{
		str[i] = check[value % base];
		value = value / base;
		i++;
	}
	str[i] = '\0';
	str = strswap(str);
	return (str);
}
