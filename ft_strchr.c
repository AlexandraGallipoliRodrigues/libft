#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
				return ((char*)str + i);
		i++;
	}
	if (c == '\0')
		return ((char*)str + i);
	return (0);
}

int main(void)
{
	char str[] = "Holaalaa";
	printf("%s\n", ft_strchr(str, 0));
	printf("%s", strchr(str, 0));
	return (0);
}

