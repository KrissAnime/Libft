/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <cbester@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 08:53:29 by cbester           #+#    #+#             */
/*   Updated: 2018/09/14 10:21:59 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_numlen_base(int num, int base)
{
	size_t x;

	x = 0;
	if (base < 2)
		return (x);
	if ((num < 0 && base == 10) || num == 0)
		x++;
	if (num < 0)
		num *= -1;
	while (num > base)
	{
		num /= base;
		x++;
	}
	return (x);
}