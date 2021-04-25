#include <string.h>
#include <stdio.h>
#include "libft.h"


int main (void)
{
	size_t size = 7;
	char dst1[20] = "lbnamgfh";

	char dst2[20] = "lbnamgfh"; //len = 8
	char *src = "bufg"; //test to ""!!!!! len = 4

 	printf ("My cat  %zu - %s\n", ft_strlcat(dst1, src, size), dst1);

	printf ("Default cat %zu - %s\n", strlcat(dst2, src, size), dst2);
	return (0);
}
/*Если size хватает, чтобы впихнуть не только строку назначения, 
но и хоть что-то от строки источника, то склеивание происходит, а
 результирующая строка гарантировано нуль терминирована. Если нет, 
 то склеивание даже не пытались начать. 
 В первом случае вернут сумму длин входных строк, 
 во втором сумму длины выделенного места и строки источника.*/