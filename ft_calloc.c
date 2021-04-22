#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    char    *dst;
    size_t  i;
    size_t  all;

    all = count * size;
    dst = malloc(all);
    if (dst == 0)
        return (NULL);
    i = 0;
    while (all != 0)
{
    dst[i] = '\0';
    i++;
    all--;
}
return ((void *)dst);
}