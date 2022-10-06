/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <santi.mag777@student.42madrid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 09:17:21 by smagniny          #+#    #+#             */
/*   Updated: 2022/10/05 16:04:32 by smagniny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
static int	freeee(char **str)
{	
	int i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
	return (0);
}*/

static int	find_ocurrences(char const *str, char charset)
{
	int	i;
	int	g;

	i = 0;
	g = 0;
	while (str[i])
	{
		if ((str[i + 1] == charset || str[i + 1] == '\0') == 1
			&& (str[i] == charset || str[i] == '\0') == 0)
			g++;
		i++;
	}
	return (g);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		len;
	int		index;

	if (!s)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * (find_ocurrences(s, c) + 1));
	if (!array)
		return (NULL);
	array[(find_ocurrences(s, c) + 1)] = 0;
	index = 0;
	len = 0;
	while (*array)
	{	
		while ((unsigned char)*(s + index) == (unsigned char)c)
			index++;
		while ((unsigned char)*(&s[index] + len) != (unsigned char)c)
			len++;
		*array = ft_substr(&s[index], 0, len);
		index += ft_strlen(*array) + 1;
		len = 0;
		array++;
	}
	return (array);
}
