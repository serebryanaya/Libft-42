#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s1dup;

	s1dup = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (s1dup == NULL)
		return (NULL);
	ft_strlcpy(s1dup, s1, ft_strlen(s1) + 1);
	return (s1dup);
}
