#include "libft.h"

int ft_isdigit(int c)
{
unsigned char   m;

m = c + '\0';
if (m >= '0' && m <= '9')
    return (1);
else
    return (0);
}
