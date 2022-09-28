/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <santi.mag777@student.42madrid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 09:17:21 by smagniny          #+#    #+#             */
/*   Updated: 2022/09/28 11:09:53 by smagniny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find_ocurrences(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s && c)
	{
		if (*s == c)
			i++;
		s++;
	}
	return (i + 1);
}


char **ft_split(char const *s, char c)
{	
    int i;
    int k;
    int j;
    int z;
    char *small;
    char **bigstr;

	if (!(s) || !(c))
		return (0);
	bigstr = (char **)malloc(find_ocurrences(s, c) * sizeof(*bigstr));
    if (!(bigstr))
        return (0);
    i = 0;
    j = 0;

    while (42)
    {
        while (s[i] == c)
            i++;
        if (s[i] == '\0')
            break;
        k = 0;
        while (s[i + k] != '\0' && s[i + k] != c)
        {
            k++;
        }
		small = (char *)malloc((k + 1) * sizeof(char));
        if (!(small))
            return (0);
        z = 0;
        while (z < k)
        {
            small[z] = s[i];
            z++;
            i++;
        }
        small[k] = '\0';
        bigstr[j] = small;
        j++;
    }
    bigstr[j] = NULL;
    return (bigstr);
}

/*
#include <stdio.h>
int		main(void)
{
	int i = 0;
	char **tab;
	char a;

	a = ' ';

	tab = ft_split("Un pet it espa ce", a);
	while (i < 5)
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
	return (0);
}*/