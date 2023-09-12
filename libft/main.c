#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

char *ft_strrchr(const char *s, int c);

int main()
{
    char string[] = "Hello there!";

    printf("ft_strrchr: %s\n", ft_strrchr(string, 'l'));
    printf("   strrchr: %s\n", strrchr(string, 'l'));
    return (0);
}