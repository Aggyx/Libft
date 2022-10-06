/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <santi.mag777@student.42madrid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:13:39 by smagniny          #+#    #+#             */
/*   Updated: 2022/10/05 18:43:10 by smagniny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{	
	t_list	*ptr;

	if (lst)
	{	
		if (*lst == NULL)
			*lst = new;
		ptr = ft_lstlast(*lst);
		ptr->next = new;
	}
}