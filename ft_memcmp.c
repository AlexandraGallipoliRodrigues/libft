#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	unsigned const char *str1;
	unsigned const char *str2;

	str1 = s1;
	str2 = s2;

	i = 0;
	while (i < n && str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

int main(void)
{
	char s1[] = "holaa";
	char s2[] = "holuu";
	
	printf("%d\n", ft_memcmp(s1, s2, 5));
	printf("%d", memcmp(s1, s2, 5));
	return (0);
}