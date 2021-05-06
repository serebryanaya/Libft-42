#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	orig;
	size_t	j;

	j = 0;
	if (dstsize < ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	orig = ft_strlen(dst);
	i = orig;
	while (i < (dstsize - 1) && (src[j] != '\0') && dstsize > 0)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (ft_strlen(src) + orig);
}
