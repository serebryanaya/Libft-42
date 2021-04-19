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
#include <stdio.h> //DELETE!!!!!!!!!!!!!!!!!!!!!!!

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i; // counter to dst
	size_t	j; // counter to src
	size_t a;

	i = 0;
	j = 0;
//	printf ("dstsize =  %zu\n", dstsize);
	while (dst[i] != '\0')
	{
		printf ("dst = %hhd\n", dst[i]); //DELLLLLLLLLLLLLLL
		i++;
	}
	while (src[j] != '\0')
	{
		printf ("src = %hhd\n", src[j]); //DEL!!!!!!!!!!!!!!
		j++;
	}	
	if (dstsize <= i)
		a = j + dstsize;
	else 
		a = i + j;
	j = 0;
	while (src[j] && i < (dstsize - 1))
		{
			dst[i] = src[j];
			printf ("dstsize =  %zu\n", dstsize);
			i++;
			j++;
		}
	dst[i] = '\0';
	return (a);
	}
