#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int ft_strncmp(const char *s1, const char *s2, unsigned long n);

int main()
{
    char *s1 = "Niños";
    char *s2 = "Niñas";

    printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, 5));
    printf("strncmp: %d\n", strncmp(s1, s2, 5));
    return (0);
}