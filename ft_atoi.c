/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <santi.mag777@student.42madrid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:15:19 by smagniny          #+#    #+#             */
/*   Updated: 2022/09/22 17:15:52 by smagniny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int		nb;
	int		i;
	int		sign;

	i = 0;
	sign = 1;
	nb = 0;
	while (str[i] != 32 && str[i] != 9
		&& str[i] != 10 && str[i] != 11 && str[i] != 12 && str[i] != 13)
	{
		if (str[i] == 45)
			sign *= -1;
		else if (str[i] >= 48 && str[i] <= 57)
			nb = (nb * 10) + str[i] - '0';
		else
			if (str[i] != 43)
				return (sign * nb);
		i++;
	}
	return (sign * nb);
}