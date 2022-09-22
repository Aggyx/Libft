/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <smagniny@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:45:21 by smagniny          #+#    #+#             */
/*   Updated: 2022/09/22 15:04:40 by smagniny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int		l;

	i = 0;
	l = ft_strlen(dst);
	if (l > dstsize)
	{
		while (i++ < ft_strlen(dst) - 1)
		{
			*(dst + l + i) = *(src + i);
		}
		*(dst + i) = '\0';
	}
	else
		return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char first[] = "This is ";
    char last[] = "a potentially long string";
	int r;

    r = strlcat(first,last,9);

    puts(first);
    printf("Value returned: %d\n",r);
    return(0);
}*/