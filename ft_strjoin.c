#include "libft.h"

char	*ft_strjoin (char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	char			*SumMemStr;

	i = 0;
	j = 0;
	SumMemStr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (SumMemStr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		SumMemStr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		SumMemStr[i] = s2[j];
		i++;
		j++;
	}
	SumMemStr[i] = '\0';
	return (SumMemStr);
}
