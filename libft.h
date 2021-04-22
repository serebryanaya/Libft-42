/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    libft.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveeta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 14:34:12 by pveeta            #+#    #+#             */
/*   Updated: 2021/04/22 22:50:25 by pveeta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

size_t		ft_strlen(const char *s);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
void	    *ft_memset(void *str, int c, size_t len);
int         ft_isalpha(int c);
int         ft_isdigit(int c);
int         ft_isalnum(int c);
void		ft_bzero(void *str, size_t len);
void		*ft_calloc(size_t count, size_t size);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);

#endif
