#include <string.h>
#include <stdio.h>

size_t ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	ts;
	size_t	td;
	size_t	i;

	td = ft_strlen(dest);
	ts = ft_strlen(src);
	i = 0;
	while (dest[i] != '\0' && (td + i + 1) < destsize)
	{
		if ((td + i + 1) < destsize)
			dest[td + i] = src[i];
		i++;
	}
	dest[td + i] = '\0';
	if (destsize < td)
		return (ts + destsize);
	else
		return (ts + td);
}

int main(void)
{
	char dest[] = "abcd";
	char src[] = "efg";
	printf("%lu", ft_strlcat(dest, src, 2)); 
	printf("%lu", strlcat(dest, src, 2));
	return (0);
}
