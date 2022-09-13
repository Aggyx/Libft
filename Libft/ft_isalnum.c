/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <santi.mag777@student.42madrid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:46:49 by smagniny          #+#    #+#             */
/*   Updated: 2022/09/12 18:53:57 by smagniny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
			return (1);
	else
        return (0);
}

int	ft_isalpha(int c)
{
	if (((c >= 65) || (c <=  90)) && ((c >= 97) || (c <= 122)))
			return (1);
	else
        return (0);
}

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	else
		return (0);
}