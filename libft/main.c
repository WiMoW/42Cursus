#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stddef.h>
#include <strings.h>

void    ft_bzero(void *s, size_t n);

int main()
{
    char s1[] = "Niños";
    int i;

    i = 0;
    bzero(s1, 4);
    printf("bzero: %c\n", s1[4]);
    ft_bzero(s1, 5);
    printf("ft_bzero: %c\n", s1[4]);
    return (0);
}