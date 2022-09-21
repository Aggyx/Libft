/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <santi.mag777@student.42madrid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:29:03 by smagniny          #+#    #+#             */
/*   Updated: 2022/09/16 15:32:38 by smagniny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    char    *dL;
    const char    *sL;
    int i;

    sL = src;
    dL = dest;
    i = 0;
    if  ((n) && (dest) && (src))
    {
        while (n--)
        {
            *(dL + i) = *(sL + i);
            i++;
        }
    }
    return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char tab[] = "";
    char tabb[] = "Kk";

    memcpy(tab, tabb, 4);
    puts(tab);
    return (0);
}*/
