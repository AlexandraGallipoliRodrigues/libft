#include "libft.h"

size_t	ft_strlen(char *str);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char const		*str;

	str = (char *)malloc(ft_strlen((char *)s + 1) * sizeof(char));
	if (!s || !f)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
