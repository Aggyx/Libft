/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <santi.mag777@student.42madrid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 09:17:21 by smagniny          #+#    #+#             */
/*   Updated: 2022/10/02 23:29:59 by smagniny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_ocurrences(char const *s, char c)
{
	int	i;
	int	g;

	i = 0;
	g = 0;
	while (s[g])
	{
		if (s[g] == c)
			i++;
		g++;
	}
	return (i + 1);
}

char	*ft_strndup(const char *s1, int n)
{
	char	*sd;
	int		l;
	int		i;

	i = 0;
	sd = malloc((n + 1) * sizeof(char));
	if (!sd)
		return (0);
	while (s1[i] && i < n)
	{
		sd[i] = s1[i];
		i++;
	}
	sd[i] = '\0';
	return (sd);
}

char	**ft_split(char const *s, char c)
{	
	char	**bigstr;
	int		i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	start = 0;
	if (!(s) || !(c))
		return (NULL);
	bigstr = (char **)malloc(find_ocurrences(s, c) * sizeof(char **));
	if (!(bigstr))
		return (0);
	while (i++ < find_ocurrences(s, c))
	{	
		while (s[j] == (unsigned char)c)
			j++;
		start = j;
		while (s[j] != (unsigned char)c)
			j++;
		bigstr[i] = ft_strndup(&s[start], j);
	}
	return (bigstr);
}
