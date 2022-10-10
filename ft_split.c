/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <smagniny@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 09:17:21 by smagniny          #+#    #+#             */
/*   Updated: 2022/10/10 13:02:43 by smagniny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

static int	ft_count_words(char const *s, char c)
{
	int	nb;
	int	i;

	nb = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			nb++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (nb);
}

static char	*ft_place_word(char const *s, char c)
{
	char	*word;
	int		i;
	int		len;

	len = 0;
	while (s[len] && s[len] != c)
			len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	*ft_cpy_str(int i, char const *s, char c, char **res)
{
	res[i] = ft_place_word(s, c);
	if (!res[i])
	{
		while (i > 0)
		{
			i--;
			free(res[i]);
		}
		free(res);
		return (NULL);
	}
	return (res[i]);
}

char	**ft_split(char const *s, char c)
{
	int		nb_words;
	int		i;
	char	**res;

	if (!s)
		return (NULL);
	i = 0;
	nb_words = ft_count_words(s, c);
	res = (char **)malloc(sizeof(char *) * (nb_words + 1));
	if (!res)
		return (NULL);
	while (i < nb_words)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
			res[i] = ft_cpy_str(i, s, c, res);
		while (*s && *s != c)
			s++;
		i++;
	}
	res[i] = 0;
	return (res);
}

/*
#include "libft.h"

static int	freeee(char **str)
{	
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
	return (0);
}

static int	find_ocurrences(char const *str, char charset)
{
	int	i;
	int	aux;

	i = 0;
	aux = 0;
	while (*str)
	{
		if (*str != charset && !aux)
		{
			i++;
			aux = 1;
		}
		else if (*str == charset)
			aux = 0;
		str++;
	}
	return (i);
}

static char	*ft_segmentator(char const *s, char c, int i)
{
	int		j;
	int		k;
	char	*resultant_string;

	j = i;
	while (s[i] && s[i] != c)
		i++;
	resultant_string = (char *)malloc(sizeof(char) * (i - j + 1));
	if (!resultant_string)
		return (NULL);
	k = 0;
	while (j != i)
		resultant_string[k++] = s[j++];
	resultant_string[k] = '\0';
	return (resultant_string);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	char	*str;
	int		i;
	int		j;

	array = (char **)malloc(sizeof(char *) * (find_ocurrences(s, c) + 1));
	if (!array || !s)
		return (NULL);
	i = 0;
	j = 0;
	while (j < find_ocurrences(s, c))
	{
		str = ft_segmentator(s, c, i);
		if (ft_strlen(str) != 0)
		{
			array[j++] = str;
			i += (ft_strlen(str) + 1);
		}
		else
			i++;
		free(str);
	}
	array[j] = NULL;
	return (array);
}
*/