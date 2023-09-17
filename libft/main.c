#include <stdio.h>
#include <ctype.h>
#include <stddef.h>
#include <strings.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "libft.h"

int	main()
{
	char	grande[] = "Hello there";
	char	peque[] = "lo";

	printf("strnstr: %s\n", strnstr(grande, peque, 8));
	printf("ft_strnstr: %s\n", ft_strnstr(grande, peque, 8));
	return (0);
}