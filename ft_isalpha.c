#include "libft.h"

int ft_isalpha(int c)
{
unsigned char   m;

m = c + '\0';
if ((m >= 'a' && m <= 'z') || (m >= 'A' && m <= 'Z'))
    return (1);
else
    return (0);
}