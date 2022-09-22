/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagniny <smagniny@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:54:35 by smagniny          #+#    #+#             */
/*   Updated: 2022/09/22 12:32:36 by smagniny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stddef.h>

int		ft_isalpha(unsigned char c);
int		ft_isdigit(int c);
int		ft_isalnum(unsigned char c);
void	ft_bzero(void *s, size_t n);
int		ft_isascii(unsigned char c);
int		ft_isprint(int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, void *src, size_t len);
void	*ft_memset(void *s, int c, size_t n);
int		ft_strlen(const char *str);
#endif