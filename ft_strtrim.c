#include "libft.h"

char	*ft_strtrim (char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*TrimMemStr;

	if (s1 == NULL || set == NULL)
		return (0);
	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != NULL)
		i++;
	while (j >= 0 && ft_strchr(set, s1[j]) != NULL)
		j--;
	if (s1[i] == '\0' || j < 0)
		TrimMemStr = ft_calloc(1, sizeof(char));
	else
		TrimMemStr = ft_calloc(j - i + 2, sizeof(char));
	if (TrimMemStr == NULL)
		return (NULL);
	ft_strlcpy(TrimMemStr, &s1[i], j - i + 2);
	return (TrimMemStr);
}