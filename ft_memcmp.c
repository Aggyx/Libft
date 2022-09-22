/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <santi.mag777@student.42madrid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:58:36 by smagniny          #+#    #+#             */
/*   Updated: 2022/09/22 17:05:48 by smagniny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(char *s1, char *s2)
{	
	int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int memcmp(const void *s1, const void *s2, size_t n)
{   
    int res;
    
    n = 0;
    while (s1 && s2 && n)
    {
        res += ft_strcmp(s1,s2);
        s1++;
        s2++;
        n--;
    }
    return (res);
}
