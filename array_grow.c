/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_grow.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <cbester@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 11:39:56 by cbester           #+#    #+#             */
/*   Updated: 2018/09/13 08:50:12 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    **array_grow(char **array, size_t size, char *line)
{
    size_t  x;
    size_t  g;
    char    **new;

    x = 0;
    g = size + 1;
    if (!(new = (char**)malloc(sizeof(char*) * g + 1)))
        return (NULL);
    while (array[x])
    {
        new[x] = ft_strdup(array[x]);
        x++;
    }
    free_array(array, size);
    new[x++] = ft_strdup(line);
    new[x] = NULL;
    return (new);
}