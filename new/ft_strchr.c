#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
    size_t i;

    i = 0;
    while (str[i] != '\0')
    {
        if (*(str + i) != c)
            i++;
        else
            return ((char *)str + i);
    }
    if ((char)c == '\0')
        return ((char *)str + i);
    return (NULL);
}