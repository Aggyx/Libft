/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_openfd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <smagniny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:17:44 by smagniny          #+#    #+#             */
/*   Updated: 2023/05/15 18:14:36 by smagniny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	openfd(char *fname)
{
	int	f;

	f = open(fname, O_RDONLY);
	if (f == -1)
		return (-1);
	return (f);
}
