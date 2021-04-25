#include <string.h>
#include <stdio.h>
#include "libft.h"
#include <ctype.h>

int main (void)
{
    int s = 'NULL';
    int res1;
    int res2;

    res1 = ft_tolower(s);
    printf ("my func: %d\n", res1);
    res2 = tolower(s);
    printf ("def func: %d\n", res2);
	return (0);
}