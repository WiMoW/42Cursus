#include <stddef.h>

char    *ft_strnstr(const char *big,	const char *little, size_t len)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while ((big[i] != '\0') && ((unsigned long)i < len))
    {
        while ((big[i + j] == little[j]) && (little[j] != '\0') && ((unsigned long)i + j < len))
            j++;
        if (little[j] == '\0')
            return ((char *)big + i);
        j = 0;
        i++;
    }
    return (0);
}