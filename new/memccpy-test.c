#include <stdio.h> //DELLLLLL
#include <string.h>
#include "libft.h"


int main (void)
{
	size_t n = 7;
	char str[10] =  "lalal";
	char dst1[10];
    char dst2[10];
    ft_memccpy(dst1, str, 2, n);
    printf ("my func: %s\n", dst1);
    memccpy(dst2, str, 2, n);
    printf ("def func: %s\n", dst2);
	return (0);
}

//в цикл надо добавить         printf ("zapolnenie: %c\n", *((unsigned char *)dst + i));