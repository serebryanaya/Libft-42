#include <stdio.h> //DELLLLLL
#include <string.h>
#include "libft.h"


int main (void)
{
	size_t n = 4;
	char str[10] =  "lalal";
	char dst[10];
    ft_memcpy(dst, str, n);
	return (0);
}

//в цикл надо добавить   printf ("zapolnenie: %s\n", (unsigned char *)dst);

/*
int		main(void)
{
write(1, "ft_memcpy\n", 10);
ft_memcpy(NULL, NULL, 0);
write(1, "memcpy\n", 7);
memcpy(NULL, NULL, 0);
}*/