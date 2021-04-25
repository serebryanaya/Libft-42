#include <string.h>
#include <stdio.h>
#include "libft.h"


int main (void)
{
	size_t size = 0;
	char dst1[20] = "lbnamgfh";
	char dst2[20] = "lbnamgfh";
	char *src = "dfgdg"; //test to ""!!!!!
	printf ("My copy %zu - %s\n", ft_strlcpy(dst1, src, size), dst1);
	printf ("Default copy %zu - %s\n", strlcpy(dst2, src, size), dst2);
	return (0);
}