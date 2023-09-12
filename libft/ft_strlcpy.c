unsigned long    ft_strlen(const char *s);

unsigned    long    ft_strlcpy(char *dst, const char *src, unsigned long size)
{
    unsigned    long    i;

    i = 0;
    if (size != 0)
    {
        while (src[i] != '\0' && i < size - 1)
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (ft_strlen(src));
}