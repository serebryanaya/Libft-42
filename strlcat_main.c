#include <string.h>
#include <stdio.h>
#include "libft.h"


int main (void)
{
	size_t size = 11;
	char dst[11] = "lalala";
	char *src = "bubu"; //test to ""!!!!!
 //	printf ("My copy %zu - %s\n", ft_strlcat(dst, src, size), dst);
	printf ("Default copy %zu - %s\n", strlcat(dst, src, size), dst);
	return (0);
}
