/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveeta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 19:49:21 by pveeta            #+#    #+#             */
/*   Updated: 2021/04/19 22:18:49 by pveeta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	orig_len_dst;

	i = 0;
	orig_len_dst = ft_strlen(dst);
	if (dstsize >= orig_len_dst)
	{
		while (orig_len_dst + i < dstsize - 1)
	{
		dst[orig_len_dst + i] = src[i];
		i++;
	}
	dst[orig_len_dst + i] = '\0';
	return (orig_len_dst + ft_strlen(src));
	}
	else
		return (dstsize + ft_strlen(src));
}