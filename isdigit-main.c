#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"


int main (void)
{
	int c = '9';
 	printf ("my return = %d\n", ft_isdigit (c));
    printf ("default return = %d\n", isdigit (c));
	return (0);
}