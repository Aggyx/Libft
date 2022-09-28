/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <santi.mag777@student.42madrid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:11:13 by smagniny          #+#    #+#             */
/*   Updated: 2022/09/28 12:21:49 by smagniny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nbrlen(long long n)
{
	size_t	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_boucle(char *x, unsigned int number, long int len)
{
	while (number > 0)
	{
		x[len--] = 48 + (number % 10);
		number = number / 10;
	}
	return (x);
}

char	*ft_itoa(int n)
{
	unsigned int		num;
	long	int			k;
	char				*str;
	
	num = 1;
	k = ft_nbrlen(n) + 1;
	str = (char *)malloc(sizeof(char) * k);
	if (!(str))
		return (0);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		num = n * -1;
		str[0] = '-';
	}
	else
		num = n;
	ft_boucle(str, num, k);
	str[k] = '\0';
	return (str);
}

int	main(void)
{
	char	*str;

	str = ft_itoa(100);
	printf("%s", str);
	free(str);
}