#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (haystack[i] != '\0' && i < len - 1)
	{
		while (needle[n] == haystack[i + n])
		{
			if (needle[n + 1] == '\0')
				return ((char*)haystack + i);
			n++;
		}
		i++;
		n = 0;
	}
	return (0);
}

int	main(void)
{
	char s1[] = "hololalalola";
	char s2[] = "la";

	printf("%s\n", ft_strnstr(s1, s2, 6));
	printf("%s\n", strnstr(s1, s2, 6));
	return (0);
}
