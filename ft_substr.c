#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*ptr;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
//	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	if (start > ft_strlen(s) - 1)
		return (ft_strdup(""));
	ptr = (char *)malloc((len + 1) * sizeof(char));
	while (len > 0 || s[start++] != '\0')
	{
		ptr[i++] = s[start++];
		len--;
	}
	ptr[i] = '\0';
	return (ptr);
}
