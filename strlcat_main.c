#include <string.h>
#include <stdio.h>
#include "libft.h"


int main (void)
{
	size_t size = 14;
	char dst1[11] = "lalal";
	char dst2[11] = "lalal";
	char *src = "bubu"; //test to ""!!!!!
 	printf ("My cat  %zu - %s\n", ft_strlcat(dst1, src, size), dst1);
	printf ("Default cat %zu - %s\n", strlcat(dst2, src, size), dst2);
	return (0);
}
