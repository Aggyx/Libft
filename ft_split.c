/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <smagniny@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 09:17:21 by smagniny          #+#    #+#             */
/*   Updated: 2022/09/27 19:06:42 by smagniny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*sd;
	int		l;
	int		i;

	l = ft_strlen(s1) + 1;
	i = 0;
	sd = malloc(l * sizeof(char));
	if (!sd)
		return (0);
	while (s1[i])
	{
		sd[i] = s1[i];
		i++;
	}
	sd[i] = '\0';
	return (sd);
}

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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*ptr;
	size_t		k;

	if (s == NULL)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	k = ft_strlen(s + start);
	if (k < len)
		len = k;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!(ptr))
		return (NULL);
	ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}

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

char	**ft_split(char const *s, char c)
{	
	size_t		i;
	size_t		k;
	char		**split_res;
	int			j;

	i = 0;
	k = 0;
	j = 0;
	split_res = (char **)malloc(sizeof(*s) * find_ocurrences(s, c));
	if (!(split_res))
		return (NULL);
	while (*s)
	{
		if (*s == c)
		{	
			split_res[k] = ft_substr(s, j, i - j);
			j = ft_strlen(split_res[k]);
			k++;
		}
		i++;
		s++;
	}
	return (split_res);
}

#include <stdio.h>

int		main(void)
{
	int i = 0;
	char **tab;

	tab = ft_split("bonjour je m'appel Arthur", ' ');
	while (i < 3)
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
	return (0);
}