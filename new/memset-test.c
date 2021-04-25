#include <string.h>
#include <stdio.h>
#include "libft.h"


int main (void)
{
	size_t len = 4;
	int i = '5';
	char str[10] =  "lalal";
	char ptr[10] =  "lalal";
	ft_memset(str, i, len);
    printf ("my func: %c\n", str[0]);
    memset(ptr, i, len);
    printf ("def func: %c\n", ptr[0]);
	return (0);
}
