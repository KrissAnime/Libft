/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 11:54:44 by cbester           #+#    #+#             */
/*   Updated: 2018/09/05 11:30:15 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	x;

	if (!(s))
		return (NULL);
	if (!(str = (char*)malloc(len + 1)))
		return (NULL);
	x = 0;
	while (x < len && s[start] != '\0')
	{
		str[x] = (char)s[start];
		x++;
		start++;
	}
	str[x] = '\0';
	return (str);
}
