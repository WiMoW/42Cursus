#include <stdio.h>
#include <ctype.h>
#include <string.h>

unsigned long ft_strlen(const char *s);
unsigned long ft_strlcpy(char *dst, const char *src, unsigned long size);

int main()
{
    const   char        source[] = "Hola k ase";
    char                destination[20];

    printf("%ld\n", ft_strlcpy(destination, source, sizeof(destination)));
    printf("%s\n", destination);
    return (0);
}