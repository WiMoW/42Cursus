void    *ft_memset(void *s, int c, size_t n)
{
    int i;
    unsigned char *ptr;

    ptr = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        ptr[i] = c;
        i++;
    }
    return (s);
}