/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <santi.mag777@student.42madrid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:29:03 by smagniny          #+#    #+#             */
/*   Updated: 2022/09/25 11:45:25 by smagniny         ###   ########.fr       */
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
	if (!src && !dest)
		return (0);
	i = 0;
	while (n--)
	{
		*(dl + i) = *(sl + i);
		i++;
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
