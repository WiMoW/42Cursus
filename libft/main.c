#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stddef.h>
#include <strings.h>



int main()
{
    char s1[] = "Niños";
    char s2[] = "ños";

    printf("strnstr: %s\n", strnstr(s1, s2, 6));
    printf("ft_strnstr: %s\n", ft_strnstr(s1, s2, 6));
    return (0);
}