/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <santi.mag777@student.42madrid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:15:58 by smagniny          #+#    #+#             */
/*   Updated: 2022/09/16 15:32:31 by smagniny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
    if (c < 32 || c > 126)
		return (0);
	else
        return (1);
}