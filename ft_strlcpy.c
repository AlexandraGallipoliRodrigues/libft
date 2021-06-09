#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;

	i = 0;
	if (!destsize)
	{
		while(src[i] != '\0')
			i++;
		return (i);
	}
	if (!dest)
		return (0);
	while (src[i] != '\0' && (i + 1) < destsize)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
