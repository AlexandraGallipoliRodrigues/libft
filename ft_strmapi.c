#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(char *str);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc(ft_strlen((char *)s + 1) * sizeof(char));
	if (!s || !f)
		return (NULL);
	while (s[i])
	{
		str[i] = (f)(i, s[i]);
		printf("%c\n", s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
