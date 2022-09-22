/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <smagniny@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:54:29 by smagniny          #+#    #+#             */
/*   Updated: 2022/09/22 12:30:29 by smagniny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memove(void *dest, void *src, size_t len)
{
	size_t	i;
	char			*d;
	char			*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (dest == src)
	{
		while ((i++ < len) && (i < ft_strlen(src)))
			*(d + i) = *(s + i);
	}
	i = 0;
	while ((i++ < len))
		dest = d + 1;
	return (dest);
}

/*
#include <string.h>

int main(void) {
   	char dest[] = "HH";
	char src[]  = "KK";
    char dest1[] = "HH";
	char src1[]  = "KK";
  	printf("Before memmove dest = %s, src = %s\n", dest, src);
    ft_memove(dest, src, 3);
   	printf("After memmove dest = %s, src = %s\n", dest, src);

    printf("memmove dest = %s, src = %s\n", dest1, src1);
    memmove(dest1, src1, 3);
   	printf("A memmove dest = %s, src = %s\n", dest1, src1);

  	return(0);
}
*/