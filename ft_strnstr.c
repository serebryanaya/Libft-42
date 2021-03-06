#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0' || haystack == needle)
		return ((char *)haystack);
	while (i < len && haystack[i + j] != '\0')
	{
		while (haystack[i + j] == needle[j] && ((i + j) < len) && \
				needle[j] != '\0')
			j++;
		if (j == ft_strlen(needle))
			return ((char *)(&haystack[i]));
		i++;
		j = 0;
	}
	return (NULL);
}
