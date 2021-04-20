/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveeta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 16:31:48 by pveeta            #+#    #+#             */
/*   Updated: 2021/04/20 17:18:20 by pveeta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*tmp;
	size_t	i;

	i = 0;
	tmp = (unsigned char *)str;
	while (i < len)
	{
		tmp[i] = c;
		i++;
	}
	return (str);
	}