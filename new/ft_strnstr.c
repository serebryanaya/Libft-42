#include "libft.h"

char    *strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    char *first_occur;

    i = 0;
    j = 0;
    first_occur = NULL;
    if (!haystack)
        return (NULL);
    if (!needle)
        return ((char *)haystack);        
    while (haystack[i] != '\0')
    {
        if (haystack[i] == needle[j] && i < len)
         {
             first_occur = haystack[i];
             i++;
         }
         else
            j = 0;
        
        if (haystack[i] != needle[j])
            i++;
        else 
            
            
            return ((char *)str + i);
    }
    if ((char)c == '\0')
        return ((char *)str + i);
    return (NULL);
}