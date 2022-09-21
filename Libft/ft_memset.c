/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <santi.mag777@student.42madrid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:20:51 by smagniny          #+#    #+#             */
/*   Updated: 2022/09/16 15:33:49 by smagniny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include <stddef.h>

void    *ft_memset(void *s, int c, size_t n);
{   
    size_t  i;
    if (c)
    {
        i = 0;
        while (i < n)
        {
            *(unsigned char)(s + i) = (unsigned char)c;
		    i++;
        }
    }
    else
        return (0);
    return s;
}