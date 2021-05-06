#include "libft.h"

static int	ft_count(char *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	j = ft_strlen(s) - 1;
	while (s[j] == c)
		j--;
	while (i < j)
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
			k++;
		while (s[i] != c)
			i++;
	}
	return (k);
}

static void	*ft_errors(char **words, int k)
{
	while (k >= 0)
	{
		free(words[k]);
		k--;
	}
	free(words);
	return (NULL);
}

char	**ft_split(char	const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**words;

	i = 0;
	k = ft_count((char *)s, c);
	words = ft_calloc(k + 1, sizeof(char *));
	if (!words)
		return (NULL);
	k = 0;
	while (s[i] != '\0' && k < ft_count((char *)s, c))
	{
		j = 0;
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i + j] != c && s[i + j] != '\0')
			j++;
		words[k] = ft_substr(s, i, j);
		if (!words[k])
			return (ft_errors(words, k));
		k++;
		i = i + j;
	}
	return (words);
}
