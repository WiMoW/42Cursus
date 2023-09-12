int ft_strncmp(const char *s1, const char *s2, unsigned long n)
{
    unsigned long i;

    i = 0;
    while (i < n)
    {
        if ((s1[i] == '\0') || (s2[i] == '\0')) 
        {
            if (s1[i] == s2[i]) 
                return 0;
            else
                return (s1[i] - s2[i]);
        }
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}
