#include <string.h>
#include <stdio.h>
#include "libft.h"

int main (void)
{
	char s[10] =  "lawertyig";
    int c = '';
    char *res1;
    char *res2;

    res1 = ft_strchr(s, c);
    printf ("my func: %c\n", res1[0]);
    res2 = strchr(s, c);
    printf ("def func: %c\n", res2[0]);
	return (0);
}
//ПРОАЕРИТЬ НА \0!!!!!