#include <stdlib.h>

void    ft_bzero(void *s, size_t n)
{
    int i;
    unsigned    char    *ptr;

    i = 0;
    ptr = s;
    while ((size_t)i < n)
    {
        ptr[i] = 0;
        i++;
    }
}