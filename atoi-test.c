#include <string.h>
#include <stdio.h>
#include "libft.h"
#include <ctype.h>

int main (void)
{
    char s[50] =  "         --4567e cakere";
    int res1;
    int res2;

    res1 = ft_atoi(s);
    printf ("my func: %d\n", res1);
    res2 = atoi(s);
    printf ("def func: %d\n", res2);
	return (0);
}