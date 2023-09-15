#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stddef.h>
#include <strings.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	result;
	int	i;
	int	sign;

	result = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ')
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while ((str[i] != '\0') && (str[i] >= '0') && (str[i] <= '9'))
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (sign * result);
}

int	main()
{
	char	s1[] = "-123";

	printf("atoi: %d\n", atoi(s1));
	printf("ft_atoi: %d\n", ft_atoi(s1));
	return (0);
}