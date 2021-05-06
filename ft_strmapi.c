#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ModernStr;
	unsigned int	i;

	i = 0;
	ModernStr = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!ModernStr)
		return (NULL);
	while (i < ft_strlen(s))
	{
		ModernStr[i] = f(i, s[i]);
		i++;
	}
	return (ModernStr);
}