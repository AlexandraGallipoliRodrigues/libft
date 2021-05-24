#include "libft.h"
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = malloc(len * sizeof(char));
	while(len)
	{
		ptr[i] = s[start + i];
		i++;
		len--;
	}
	if (!ptr)
		return (NULL);
	return (ptr);
}

int main (void)
{
	char str[] = "holaque";
	printf("%s", ft_substr(str, 4, 3));
	return (0);
}
