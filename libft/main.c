#include <stdio.h>
#include <ctype.h>
#include <string.h>

int ft_tolower(int c);
int ft_toupper(int c);

int main()
{
    char c = 'a';

    c = ft_toupper(c);
    printf("%c\n", c);
    return (0);
}