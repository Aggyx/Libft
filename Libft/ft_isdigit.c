/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <santi.mag777@student.42madrid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:31:30 by smagniny          #+#    #+#             */
/*   Updated: 2022/09/12 18:50:02 by smagniny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	ft_isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
			return (1);
	else
        return (0);
}
/*
#include <stdio.h>
s
int	main()
{
	char tab[] = "112hola";
	printf("%d", ft_str_is_alpha(tab));
}
*/
