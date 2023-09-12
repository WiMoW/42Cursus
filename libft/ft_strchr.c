char    *ft_strchr(const char *s, int c)
{
    unsigned long   i;
    unsigned char   *ptr;

    i = 0;
    ptr = s;
    while (ptr[i] != '\0')
    {
        if (ptr[i] == c)
            return (ptr + i);
        i++;
    }
    if (ptr[i] == c)
        return (ptr + i);
    return (NULL);

}