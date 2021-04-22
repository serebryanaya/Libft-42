#include "libft.h"

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    size_t  i;

    i = 0;
    if (!dst && !src)
		  return (NULL);
    i = 0;
    while (i < n)
    {
        if (*((unsigned char *)src + i) == c + '\0')
            return ((unsigned char *)dst + i + 1);
        *((unsigned char *)dst + i) = *((unsigned char *)src + i);
        i++;
    }
    return (NULL);
}