/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strswap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <cbester@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 10:09:15 by cbester           #+#    #+#             */
/*   Updated: 2018/09/14 10:09:44 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strswap(char *str)
{
	int		i;
	int		x;
	char	temp;

	i = 0;
	x = 0;
	while (str[i] != '\0')
		i++;
	if (str[x] == '-')
		x++;
	i--;
	while (x < i)
	{
		temp = str[x];
		str[x] = str[i];
		str[i] = temp;
		x++;
		i--;
	}
	return (str);
}