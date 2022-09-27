/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <smagniny@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:17:09 by smagniny          #+#    #+#             */
/*   Updated: 2022/09/27 16:01:19 by smagniny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;
	int		i;

	ret = NULL;
	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			ret = &((char *)s)[i];
		i++;
	}
	if ((unsigned char)c == 0)
		ret = &((char *)s)[i];
	return (ret);
}
/*
#include <stdio.h>

int main(void)
{
    char buff[10] = "aaaaloo";
    int     c = 97;
    void    *p;

    p = ft_strrchr(buff, c);
    printf("%p", p);

}*/