/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <santi.mag777@student.42madrid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:42:24 by smagniny          #+#    #+#             */
/*   Updated: 2022/09/22 16:43:35 by smagniny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned int	i;

	i = 0;
	while ((s1[i]) && (s2[i]) && (s1[i] == s2[i]) && (i < n - 1))
		i++;
	if (n == 0)
		return (0);
	else
		return (s1[i] - s2[i]);
}
