void    *ft_memset(void *s, int c, unsigned long n)
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