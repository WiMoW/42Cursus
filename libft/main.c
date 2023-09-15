#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stddef.h>
#include <strings.h>
#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	while ((big[i] != '\0') && (i < len))
	{
		while ((big[i + j] == little[j])
			&& (little[j] != '\0') && (i + j < len))
			j++;
		if (little[j] == '\0')
			return ((char *)big + i);
		j = 0;
		i++;
	}
	return (0);
}

int	main()
{
	char	grande[] = "Hello there";
	char	peque[] = "lo";

	printf("strnstr: %s\n", strnstr(grande, peque, 8));
	printf("ft_strnstr: %s\n", ft_strnstr(grande, peque, 8));
	return (0);
}