#include <string.h>
#include <stdio.h>
#include "libft.h"

int main (void)
{
	char haystack[50] =  "the cake is a lie !\0I'm hidden lol\r\n";
 	char needle[] =  "akr";   
    size_t len = 10;
  //  char *res1;
    char *res2;

    //res1 = ft_strnstr(haystack, needle, len);
    //printf ("my func: %c\n", res1[0]);
    res2 = strnstr(haystack, needle, len);
    printf ("def func: %c\n", res2[0]);
	return (0);
}