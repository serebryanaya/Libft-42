#include <string.h>
#include <stdio.h>
#include "libft.h"


int main (void)
{
	size_t len = 4;
	int i = '5';
	char str[10] =  "lalal";
 	ft_memset(str, i, len);
	return (0);
}
// надо в фнукцию добавить строки с принт в цикл while:
//printf ("наполнение: %c\n", tmp[i]);