#include "libft.h"

int ft_isalnum(int c)
{
unsigned char   m;

m = c + '\0';
if ((m >= '0' && m <= '9') || (m >= 'a' && m <= 'z') || (m >= 'A' && m <= 'Z'))
    return (1);
else
    return (0);
}