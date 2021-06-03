#include "libft.h"

int	ft_atoi(const char *str)
{
	int	val;
	int	num;
	int	i;

	i = 0;
	num = 0;
	val = 1;
	while (str[i] == ' ' || (str[i] >= 0 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			val *= -1;
		i++;
		if (str[i] == '-' || str[i] == '+')
			return (0);
	}
	while (str[i] >= 48 || str[i] >= 57)
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * val);
}
