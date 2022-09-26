/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <santi.mag777@student.42madrid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:33:08 by smagniny          #+#    #+#             */
/*   Updated: 2022/09/26 13:24:17 by smagniny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	
	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	str = ft_strdup(s);
	while (*s)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}