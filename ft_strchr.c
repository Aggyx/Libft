/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <santi.mag777@student.42madrid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:54:27 by smagniny          #+#    #+#             */
/*   Updated: 2022/09/26 09:07:09 by smagniny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr != c)
	{
		if (*ptr == '\0')
			return (0);
		ptr++;
	}
	return (ptr);
}

/*
#include <stdio.h>

int main(void)
{
    char buff[10] = "holaaa";
    int     c = 97;
    void    *p;

    p = ft_strchr(buff, c);
    printf("%p", p);

}*/