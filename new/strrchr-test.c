#include <string.h>
#include <stdio.h>
#include "libft.h"

int main (void)
{
	char s[] =  "the cake is a lie !\0I'm hidden lol\r\n";
    int c = ' ';
    char *res1;
    char *res2;

    res1 = ft_strrchr(s, c);
    printf ("my func: %c\n", res1[1]);
    res2 = strrchr(s, c);
    printf ("def func: %c\n", res2[1]);
	return (0);
}