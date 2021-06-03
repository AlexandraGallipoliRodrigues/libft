#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	ptr = malloc((len + 1) * sizeof(char));
	ft_memcpy(ptr, &s[start], len);
	ptr[len] = '\0';
	if (!ptr)
		return (NULL);
	return (ptr);
}
