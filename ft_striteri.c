/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <santi.mag777@student.42madrid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:24:32 by smagniny          #+#    #+#             */
/*   Updated: 2022/09/28 12:41:21 by smagniny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{	
	unsigned	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (*s && ((s != NULL) && (f != NULL)))
	{
		f(i, &s[i]);
		i++;
	}
}

