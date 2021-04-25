#include <string.h>
#include <stdio.h>
#include "libft.h"


int main (void)
{
	char *s = "lallallaa";
	printf ("My len %zu\n", ft_strlen(&s[0]));
	printf ("Default len %zu\n", strlen(&s[0]));
return (0);
}
