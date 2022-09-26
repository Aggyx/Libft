/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <santi.mag777@student.42madrid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:37:05 by smagniny          #+#    #+#             */
/*   Updated: 2022/09/26 12:50:33 by smagniny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	int		i;
	
	i = 0;
	if (!s)
		return (NULL);
	ptr = (char *)malloc((len + 1) * sizeof(*s));
	if (!ptr)
		return (NULL);
	while (len--)
	{
		ptr[i] = s[start];
		start++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*
int	main(void)
{
	char tab[] = "holacomoestasmanu";
	char *p;

	p = ft_substr(tab,0,120);
	printf("%s", p);
	free(p);
}*/