#include <stdio.h>
#include <ctype.h>
#include <string.h>


unsigned long ft_strlen(const char *str);

int main()
{
    const   char        source[] = "Hola k ase";
    char                destination[20];

    printf("%d\n", strlcpy(destination, source, sizeof(destination)));
    printf("%s\n", destination);
    return (0);
}