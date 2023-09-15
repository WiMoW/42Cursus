#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stddef.h>
#include <strings.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	main()
{
	char	s1[] = "Hello there!";
	char	s2[] = "Hellothere!";

	printf("memcpm: %d\n", memcmp(s1, s2, 6));
	printf("ft_memcpm: %d\n", ft_memcmp(s1, s2, 6));
	return (0);
}