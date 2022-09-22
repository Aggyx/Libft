/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <santi.mag777@student.42madrid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:47:55 by smagniny          #+#    #+#             */
/*   Updated: 2022/09/22 16:55:28 by smagniny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memchr(const void *s, int c, size_t n)
{
    char    *ptr;

    ptr = (char *)s;
    while (*ptr != c && n)
    {
        if (*ptr == '\0')
            return (0);
        ptr++;
        n--;     
    }
    return (ptr);
}
