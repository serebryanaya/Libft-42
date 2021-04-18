#include <string.h>
#include <stdio.h>
#include "libft.h"


int main (void)
{
	size_t size = 10;
	char dst[10];
	char *src = ""; //test to ""!!!!!
	printf ("My copy %zu - %s\n", ft_strlcpy(dst, src, size), dst);
	printf ("Default copy %zu - %s\n", strlcpy(dst, src, size), dst);
	return (0);
}
