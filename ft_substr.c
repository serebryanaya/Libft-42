#include "libft.h"

char	*ft_substr (char const *s, unsigned int start, size_t len)
{
	char			*sMem;
	unsigned int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		sMem = ft_calloc(1, sizeof(char));
		if (sMem == NULL)
			return (NULL);
		return (sMem);
	}
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	sMem = malloc(sizeof(char) * (len + 1));
	if (sMem == NULL)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		sMem[i] = s[start + i];
		i++;
	}
	sMem[i] = '\0';
	return (sMem);
}