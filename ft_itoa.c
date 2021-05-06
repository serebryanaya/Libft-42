#include "libft.h"

static long int	ft_counter (int n)
{
	long int	i;

	i = 0;
	while (n / 10 >= 1)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*ft_create_answer(char *answer, int i, int k, int n)
{
	while ((i >= 0 && k == 0) || (i > 0 && k == -1))
	{
		if (k == -1)
			answer[0] = '-';
		answer[i] = n % 10 + 48;
		n = n / 10;
		i--;
	}
	return (answer);
}

char	*ft_itoa(int n)
{
	char	*answer;
	int		i;
	int		k;

	if (n == -2147483648)
	{
		answer = ft_strdup("-2147483648");
		return (answer);
	}
	i = 0;
	k = 0;
	if (n < 0)
	{
		n = -n;
		k = -1;
		i = 1;
	}
	i = i + ft_counter(n);
	answer = ft_calloc(i + 2, sizeof(char));
	if (answer == NULL)
		return (NULL);
	answer = ft_create_answer(answer, i, k, n);
	return (answer);
}
