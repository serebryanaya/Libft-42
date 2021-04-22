#include <stdio.h>
#include <strings.h>
#include "libft.h"


int main (void)
{
	size_t len = 4;
	char str[10] =  "labtnjmi";
    char ptr[10] =  "labtnjmi";
 	ft_bzero(str, len);
    printf ("my func: %c\n", str[5]);
    bzero(ptr, len);
    printf ("def func: %c\n", ptr[5]);
	return (0);
}