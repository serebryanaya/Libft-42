#include <string.h>
#include <stdio.h>
#include "libft.h"
#include <ctype.h>

int main (void)
{
    int s = ' ';
    int res1;
    int res2;

    res1 = ft_toupper(s);
    printf ("my func: %d\n", res1);
    res2 = toupper(s);
    printf ("def func: %d\n", res2);
	return (0);
}