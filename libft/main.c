#include <stdio.h>
#include <ctype.h>
#include <stddef.h>
#include <strings.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "libft.h"

/*
int	main()
{
	char	str[] = "--123";

	printf("atoi: %d\n", atoi(str));
	printf("ft_atoi: %d\n", ft_atoi(str));
	return (0);
}
*/
/*
int	main()
{
	char	str[] = "Hello there";

	bzero(str, 5);
	printf("bzero: %s\n", str);
	ft_bzero(str, 5);
	printf("ft_bzero: %s\n", str);
	return (0);
}
*/
/*
int	main()
{
	char	c;

	c = '@';
	printf("isalnum: %d\n", isalnum(c));
	printf("ft_isalnum: %d\n", ft_isalnum(c));
	return (0);
}
*/
/*
int	main()
{
	char	c;

	c = 'a';
	printf("isalpha: %d\n", isalpha(c));
	printf("ft_isalpha: %d\n", ft_isalpha(c));
	return (0);
}
*/
/*
int	main()
{
	char	c;

	c = 'a';
	printf("isascii: %d\n", isascii(c));
	printf("ft_isascii: %d\n", ft_isascii(c));
	return (0);
}
*/
/*
int	main()
{
	char	c;

	c = 'a';
	printf("isdigit: %d\n", isdigit(c));
	printf("ft_isdigit: %d\n", ft_isdigit(c));
	return (0);
}
*/
/*
int	main()
{
	char	c;

	c = 'a';
	printf("isprint: %d\n", isprint(c));
	printf("ft_isprint: %d\n", ft_isprint(c));
	return (0);
}
*/
/*
int	main()
{
	char	*str;
	char	*ptr;
	char	c;

	str = "Hello there";
	c = 'e';
	ptr = memchr(str, c, 5);
	printf("memchr: %s\n", ptr);
	ptr = ft_memchr(str, c, 5);
	printf("ft_memchr: %s\n", ptr);
	return (0);
}
*/
/*
int	main()
{
	char	*str1;
	char	*str2;
	int		n;

	str1 = "Hello there";
	str2 = "Hello there";
	n = 5;
	printf("memcmp: %d\n", memcmp(str1, str2, n));
	printf("ft_memcmp: %d\n", ft_memcmp(str1, str2, n));
	return (0);
}
*/
/*
int main()
{
    char str1[20];
    const char *str2 = "Hello there";

	memcpy(str1, str2, 5);
	printf("str1 after memcpy: %s\n", str1);
	ft_memcpy(str1, str2, 5);
	printf("str1 after ft_memcpy: %s\n", str1);
    return	(0);
}
*/
/*
int	main()
{
	char str1[20];
    const char *str2 = "Hello there";

	memmove(str1, str2, 5);
	printf("str1 after memmove: %s\n", str1);
	ft_memmove(str1, str2, 5);
	printf("str1 after ft_memmove: %s\n", str1);
    return	(0);
}
*/
/*
int	main()
{
	char	str[] = "Hello there";
	char	*ptr;
	int		c;
	int		n;

	c = 'a';
	n = 5;
	ptr = memset(str, c, n);
	printf("memset: %s\n", ptr);
	ptr = ft_memset(str, c, n);
	printf("ft_memset: %s\n", ptr);
	return (0);
}
*/
/*
int	main()
{
	char	*str;
	char	*ptr;
	int		c;

	str = "Hello there";
	c = 'a';
	ptr = strchr(str, c);
	printf("strchr: %s\n", ptr);
	ptr = ft_strchr(str, c);
	printf("ft_strchr: %s\n", ptr);
	return (0);
}
*/
/*
int	main()
{
	char	*src;
	char	*dst;
	size_t	size;

	src = "Hello ";
	dst = "there";
	size = 5;
	printf("strlcat: %lu\n", strlcat(dst, src, size));
	printf("ft_strlcat: %lu\n", ft_strlcat(dst, src, size));
	return (0);
}
*/
/*
int	main()
{
	char	*src;
	char	dst[10];
	size_t	size;

	src = "Hello ";
	size = 5;
	printf("strlcpy: %lu\n", strlcpy(dst, src, size));
	printf("ft_strlcpy: %lu\n", ft_strlcpy(dst, src, size));
	return (0);
}
*/
/*
int	main()
{
	char	*str;

	str = "Hello there";
	printf("strlen: %ld\n", strlen(str));
	printf("ft_strlen: %ld\n", ft_strlen(str));
	return (0);
}
*/
/*
int	main()
{
	char	*str1;
	char	*str2;
	int		n;

	str1 = "Hello there";
	str2 = "Hello there";
	n = 5;
	printf("strncmp: %d\n", strncmp(str1, str2, n));
	printf("ft_strncmp: %d\n", ft_strncmp(str1, str2, n));
	return (0);
}
*/
/*
int	main()
{
	char	*big;
	char	*little;
	size_t	len;

	big = "Hello there";
	little = "there";
	len = 5;
	printf("strnstr: %s\n", strnstr(big, little, len));
	printf("ft_strnstr: %s\n", ft_strnstr(big, little, len));
	return (0);
}
*/
/*
int	main()
{
	char	*str;
	char	*ptr;
	int		c;

	str = "Hello there";
	c = 'e';
	ptr = strrchr(str, c);
	printf("strrchr: %s\n", ptr);
	ptr = ft_strrchr(str, c);
	printf("ft_strrchr: %s\n", ptr);
	return (0);
}
*/
/*
int	main()
{
	char	c;

	c = 'A';
	printf("tolower: %c\n", tolower(c));
	printf("ft_tolower: %c\n", ft_tolower(c));
	return (0);
}
*/
/*
int	main()
{
	char	c;

	c = 'a';
	printf("toupper: %c\n", toupper(c));
	printf("ft_toupper: %c\n", ft_toupper(c));
	return (0);
}
*/
/*
int main()
{
	int i;
	int *ptr; 

	i = 0;
	ptr = calloc(10, sizeof(int));
	if (ptr == NULL)
	{
		printf("Error! memory not allocated.");
		exit(0);
	}
	while (i < 10)
	{
		printf("%d ", ptr[i]);
		i++;
	}
	free(ptr);
	printf("\n");
	i = 0;
	ptr = ft_calloc(10, sizeof(int));
	if (ptr == NULL)
	{
		printf("Error! memory not allocated.");
		exit(0);
	}
	while (i < 10)
	{
		printf("%d ", ptr[i]);
		i++;
	}
	free(ptr);
	printf("\n");
	return 0;
}
*/
/*
#include <string.h>
#include <stdio.h>

int	main()
{
	char	string[] = "";
	char	*ptr;

	ptr = strdup(string);
	printf("%s\n", ptr);
	printf("strdup: %lu\n", ft_strlen(ptr));
	free(ptr);
	ptr = ft_strdup(string);
	printf("%s\n", ptr);
	printf("ft_strdup: %lu\n", ft_strlen(ptr));
	free(ptr);
	return (0);
}
*/
/*
#include <stdio.h>

int	main()
{
	char const	string[] = "Mondongo";
	char		*substring;

	substring = ft_substr(string, 5, 6);
	printf("Original string: %s\n", string);
	printf("Substring: %s\n", substring);
	printf("Length: %lu\n", ft_strlen(substring));
	free(substring);
	return (0);
}
*/
