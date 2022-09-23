/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <smagniny@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:54:42 by smagniny          #+#    #+#             */
/*   Updated: 2022/09/23 12:25:05 by smagniny         ###   ########.fr       */
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
