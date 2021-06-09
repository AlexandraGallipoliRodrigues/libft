#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < (len - 1))
	{
		while (needle[n] == haystack[i + n] && (i + n) < len)
		{
			if (needle[n + 1] == '\0')
				return ((char *)haystack + i);
			n++;
		}
		i++;
		n = 0;
	}
	if (haystack[i] != needle[i])
		return (NULL);
	return (NULL);
}
