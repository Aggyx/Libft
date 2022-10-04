/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <smagniny@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 09:17:21 by smagniny          #+#    #+#             */
/*   Updated: 2022/10/04 18:07:21 by smagniny         ###   ########.fr       */
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
		if (s[g] == c && s[g + 1] != c && s[g + 1])
			i++;
		g++;
	}
	return (i + 1);
}

static char	*ft_segmentator(char const *s, char c, int i)
{
	int		j;
	int		k;
	char	*resultant_string;

	j = i;
	while (s[i] && s[i] != c)
		i++;
	resultant_string = (char *)malloc(sizeof(char) * ((i - j) + 1));
	if (!resultant_string)
		return (NULL);
	k = 0;
	while (j != i)
	{
		resultant_string[k] = s[j];
		k++;
		j++;
	}
	resultant_string[k] = '\0';
	return (resultant_string);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * (find_ocurrences(s, c)));
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	while (i <= (int)ft_strlen(s) && find_ocurrences(s, c))
	{
		if (ft_strlen(ft_segmentator(s, c, i)))
		{
			array[j] = ft_segmentator(s, c, i);
			i += (ft_strlen(array[j]) + 1);
			j++;
		}
		else
			i++;
	}
	array[j] = NULL;
	return (array);
}


/*
#include "libft.h"

static int	freeee(char **str)
{
	while (str)
		free(str);
	free(str);
	return (0);
}

end toma el valor de i y i se convierte en el END, 
vamos aumentando i(END) hasta encontrarnos con C.
hacemos malloc del tamaño de la substring.
hacemos la copia de la substring si END se acaba mas lejos que end.

static char	*ft_segmentator(char const *s, char c, char **tab)
{
	int		end;
	char	*substr;

	end = 0;
	while (*s && *s == c)
		s++;
	while (s[end] && s[end] != c)
		end++;
	*tab = malloc(end * (char));
	if (!(*tab))
		return (freeee(tab));
	ft_strlcpy(*tab, s, end);

	
	substr = (char *)malloc(sizeof(char) * ((i - end) + 1));
	if (!substr)
		return (NULL);
	k = 0;
	while (end <= i)
	{
		substr[k] = s[end];
		k++;
		end++;
	}
	substr[k] = '\0';
	
	return (&s[end]);
}

char	**ft_split(char const *s, char c)
{
	char	**bigstr;
	int		k;
	int		i;
	int		j;

	j = 0;
	i = 0;
	k = 0;
	if (!(s))
		return (NULL);
	bigstr = (char **)malloc(find_ocurrences(s, c) * sizeof(char *));
	if (!(bigstr))
		return (0);
	while (k < find_ocurrences(s, c))
	{	
		if (ft_strlen(ft_segmentator(s, c, bigstr, i)))
		{
			s = ft_segmentator(s, c, bigstr, i);
			i++;
		}
		k++;
	}
	bigstr[j] = NULL;
	return (bigstr);
}

int	main(void)
{
	char	tab[] = "   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ";
	char 	**tabb;
	int		i;

	i = 0;

	tabb = ft_split(tab, ' ');
	while (tabb[i])
	{
		printf("%s-\n", tabb[i]);
		i++;
	}
	freeee(tabb, 4);
	free(tabb);
}
*/