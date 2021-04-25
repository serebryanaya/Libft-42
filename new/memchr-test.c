#include <stdio.h> //DELLLLLL
#include <string.h>
#include "libft.h"


int main (void)
{
	size_t n = 7;
	char s[10] =  "lawertyigj";
    int c = 121;
    char *res1;
    char *res2;

    res1 = ft_memchr(s, c, n);
    printf ("my func: %c\n", res1[0]);
    res2 = memchr(s, c, n);
    printf ("def func: %c\n", res2[0]);
	return (0);
}