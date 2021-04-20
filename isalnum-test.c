#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"


int main (void)
{
	int c = 'S';
 	printf ("my return = %d\n", ft_isalnum (c));
    printf ("default return = %d\n", isalnum (c));
	return (0);
}