/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <smagniny@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 09:17:21 by smagniny          #+#    #+#             */
/*   Updated: 2022/09/29 20:06:56 by smagniny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	counter;

	counter = ft_strlen(src);
	if (!dstsize)
		return (counter);
	i = 0;
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = (unsigned char)src[i];
		i++;
	}
	dst[i] = '\0';
	return (counter);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*ptr;
	size_t		k;

	if (s == NULL)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return ("");
	k = ft_strlen(s + start);
	if (k < len)
		len = k;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!(ptr))
		return (NULL);
	ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}

int	ft_strlen(const char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		index++;
	}
	return (index);
}
*/
static char	**freeeeee(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static int	find_ocurrences(char const *s, char c)
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

char	*inside_str(char const *s, char c, int start)
{	
	int	end;
	int	i;

	end = 0;
	i = 0;
	while (s[i] == c)
	{
		i++;
		start++;
	}
	i = 0;
	while (s[i] != c)
	{
		i++;
		end++;
	}
	/* while (i < ft_strlen(s))
	{	
		if (s[i] == c)
			start++;
		else
			end++;
		i++;
	} */
	printf("%s\n" , ft_substr(s, start, end));

	return (ft_substr(s, start, end));
}

char	**ft_split(char const *s, char c)
{	
	char	**bigstr;
	int		i;
	int		start;

	i = 0;
	start = 0;
	if (!(s) || !(c))
		return (0);
	if (find_ocurrences(s, c) == 0)
		return (NULL);
	bigstr = (char **)malloc(find_ocurrences(s, c) * sizeof(*bigstr));
	if (!(bigstr))
		return (0);
	while (i < find_ocurrences(s, c))
	{
		bigstr[i] = inside_str(s, c, start);
		start += ft_strlen(bigstr[i]);
		i++;
	}
	return (bigstr);
}


#include <stdio.h>

int		main(void)
{
	int i = 0;
	char **tab;
	char a;

	a = ' ';

	tab = ft_split("Un petit espace", a);
	while (i < 3)
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
	freeeeee(tab);
	return (0);
}