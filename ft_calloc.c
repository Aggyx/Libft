/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <smagniny@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:46:30 by smagniny          #+#    #+#             */
/*   Updated: 2022/10/13 16:55:49 by smagniny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size * count < count && size * count < size)
		return (0);
	ptr = malloc(size * count);
	if (!ptr)
		return (0);
	else
		return (ft_memset(ptr, 0, size * count));
}
