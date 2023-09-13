#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stddef.h>

char *ft_strnstr(const char *big, const char *little, size_t len);

int main()
{
    char *s1 = "Niños";
    char *s2 = "ño";

    //printf("ft_strnstr: %s\n", ft_strnstr(s1, s2, 2));
    printf("strnstr: %s\n", strnstr(s1, s2, 2));
    return (0);
}