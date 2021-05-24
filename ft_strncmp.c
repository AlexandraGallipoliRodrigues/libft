#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	/*if (i != n)
		return (s1[i] - s2[i]);*/
	return (0);
}

int main(void)
{
	char s1[] = "hla·";
	char s2[] = "hla%";
	int a = ft_strncmp4i(s1, s2, );
	printf("%i\n", strncmp(s1, s2, -1));
	printf("%i\n", a);
	return (0);
}

