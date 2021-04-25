#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"


int main (void)
{
	int c = '0';
 	printf ("my return = %d\n", ft_isalpha (c));
    printf ("default return = %d\n", isalpha (c));
	return (0);
}