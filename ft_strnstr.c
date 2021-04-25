#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    if (!haystack || len < ft_strlen(needle))
        return (NULL);
    if (!needle)
        return ((char *)haystack);        
    while (haystack[i] != '\0' && i < len && needle[j] != '\0')
    {
        if (haystack[i + j] != needle[j])
            {
                i++;
                j = 0;
            }
        else
                j++;
    }
    if ((needle[j] == '\0') || (haystack[i] == '\0' && j != 0) || (i == len && j != 0))
        return ((char *)&haystack[i]);
    return (NULL);
}