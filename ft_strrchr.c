#include "libft.h"

char *ft_strrchr (const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char*)str + i);
		i--;
	}
	if (c == '\0')
		return ((char*)str + i);
	return (0);
}

int	main(void)
{
	char str[] = "holalalaaa";
	printf("%s\n", ft_strrchr(str, 0));
	printf("%s", strrchr(str, 0));
	return (0);
}
