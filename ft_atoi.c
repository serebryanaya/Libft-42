#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi(const char *s)
{
	int					i;
	int					sign;
	unsigned long long	number;

	i = 0;
	number = 0;
	while (ft_isspace(s[i]) != 0)
		i++;
	if (s[i] == '-')
		sign = -1;
	else
		sign = 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	while (ft_isdigit(s[i]) != 0)
	{
		number = 10 * number + (s[i] - '0');
		i++;
	}
	if (sign == -1 && (number > 2147483648))
		number = 0;
	if (sign == 1 && (number > 2147483647))
		number = -1;
	return (sign * (int)number);
}
