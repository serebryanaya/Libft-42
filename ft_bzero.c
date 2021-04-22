#include "libft.h"

void	ft_bzero(void *str, size_t len)
{
        size_t i;

    i = 0;
    while (i < len)
    {
        *((unsigned char *)str + i) = '\0';
        i++;
    }
}