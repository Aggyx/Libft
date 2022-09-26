/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <santi.mag777@student.42madrid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 09:17:21 by smagniny          #+#    #+#             */
/*   Updated: 2022/09/26 10:26:22 by smagniny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
holamellamosanti
int	find_ocurrences(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s && c)
	{
		if (*s == c)
			i++;
		*s++;
	}
	return (i + 1)
}

char **ft_split(char const *s, char c)
{
	char	**split_res;
	int		i;
	int 	k;
		
	split_res = (char *)malloc(sizeof(*s) * find_ocurrences(*s, c));
	i = 0;
	k = 0;
	while (*s)
	{
		if (*s == c)
			ft_strlcpy(split_res[k], s, i);
			k++;
		i++;
	}
}