size_t  ft_strlen(const char *s);

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    unsigned    long    i;
    unsigned    long    j;

    i = 0;
    j = 0;
    while ((dst[i] != '\0') && (i < size))
        i++;
    while ((src[j] != '\0') && (i + j + 1 < size))
    {
        dst[i + j] = src[j];
        j++;
    }
    if (i < size)
        dst[i + j] = '\0';
    return (i + ft_strlen(src));
}