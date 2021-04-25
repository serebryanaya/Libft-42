#include <stdio.h> //DELLLLLL
#include <string.h>
#include "libft.h"


int main (void)
{
	size_t n = 7;
	char str[10] =  "allalbmp";
	void *src = str;
    void *dst1 = str + 1;
    printf ("test dst1: %c\n", *((unsigned char *)dst1));
    printf ("test src: %c\n", *((unsigned char *)src));

    ft_memmove(dst1, src, n);
    printf ("my func: %s\n", dst1);
    
  /*  void *dst2 = str + 1;
    memmove(dst2, src, n);
    printf ("def func: %s\n", dst2);*/
	return (0);
}

//в цикл надо добавить         