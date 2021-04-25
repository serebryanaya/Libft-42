#include <stdio.h> //DELLLLLL
#include <string.h>
#include "libft.h"

int main (void)
{
	size_t n = 7;
	char s1[10] =  "\200";
    char s2[10] =  "\0";
    char *res1;
    char *res2;

    printf ("def func: %d\n", memcmp(s1, s2, n));
    printf ("my func: %d\n", ft_memcmp(s1, s2, n));
	return (0);
}