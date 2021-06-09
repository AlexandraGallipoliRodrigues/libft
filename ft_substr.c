#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr || !s)
		return (NULL);
	if (start > ft_strlen(s) - 1)
			return (ft_strdup(""));
	ft_memcpy(ptr, &s[start], len);
	ptr[len] = '\0';
	return (ptr);
}
