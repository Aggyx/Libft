/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <santi.mag777@student.42madrid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 09:17:21 by smagniny          #+#    #+#             */
/*   Updated: 2022/10/05 12:49:02 by smagniny         ###   ########.fr       */
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

static	char	*index_subtring(char const *s, int index, int len, char c)
{
	while ((unsigned char)*(s + index) == (unsigned char)c)
		index++;
	while ((unsigned char)*(&s[index] + len) != (unsigned char)c)
		len++;
	return (ft_substr(&s[index], 0, len));
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		len;
	int		index;
	int		j;

	if (!s)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * (find_ocurrences(s, c) + 1));
	if (!array)
		return (NULL);
	j = 0;
	index = 0;
	len = 0;
	while (j < find_ocurrences(s, c))
	{	
		array[j] = index_subtring(s, index, len, c);
		index += len + 1;
		len = 0;
		j++;
	}
	array[j] = 0;
	return (array);
}

/*
int	main(void)
{
	char	tab[] = "\0aa\0bbb";
	char 	**tabb;
	int		i;

	i = 0;
	tabb = ft_split(tab, '\0');
	while (tabb[i] != 0)
	{
		printf("%s-\n", tabb[i]);
		i++;
	}
	freeee(tabb);
}*/
