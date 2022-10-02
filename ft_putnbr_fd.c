/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <santi.mag777@student.42madrid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:34:08 by smagniny          #+#    #+#             */
/*   Updated: 2022/10/02 18:48:50 by smagniny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if ((nb >= -2147483648) && (nb <= 2147483647))
	{
		if (nb == -2147483648)
		{
			ft_putchar_fd('-', fd);
			ft_putchar_fd('2', fd);
			nb = 147483648;
		}	
		if (nb < 0)
		{
			nb *= -1;
			ft_putchar_fd('-', fd);
		}
		if (nb >= 10)
		{
			ft_putnbr_fd(nb / 10, fd);
			ft_putnbr_fd(nb % 10, fd);
		}
		else
			ft_putchar_fd(nb + 48, fd);
	}
}
