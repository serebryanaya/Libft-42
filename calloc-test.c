#include <stdio.h> // DEl!!!!!!!!
#include <string.h>
#include "libft.h"

int main (void)
{
	size_t count = 5;
    size_t size = 1;
 	ft_calloc(count, size);
	return (0);
}

//для проверки в цикле добавить     printf ("%c\n", (dst[i] + 67));
//должно быть "С"