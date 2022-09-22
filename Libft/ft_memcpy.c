/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <smagniny@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:29:03 by smagniny          #+#    #+#             */
/*   Updated: 2022/09/22 12:20:37 by smagniny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*sl;
	char		*dl;
	int			i;

	sl = src;
	dl = dest;
	i = 0;
	if ((n) && (dest) && (src))
	{
		while (n--)
		{
			*(dl + i) = *(sl + i);
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
