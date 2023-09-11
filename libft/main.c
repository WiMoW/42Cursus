#include <stdio.h>
#include <ctype.h>

int ft_isprint(int c);

int main()
{
    printf("%d\n", isprint('\t'));
    printf("%d\n", ft_isprint('\t'));
    return (0);
}