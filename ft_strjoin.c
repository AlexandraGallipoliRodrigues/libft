#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*ptr;
	size_t	lens1;
	size_t	lens2;
	size_t	i;
	size_t	j;

	lens1 = ft_strlen((char *)s1);
	lens2 = ft_strlen((char *)s2);
	ptr = malloc(lens1 + lens2);
	i = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		ptr[i + j] = s2[j];
		j++;
	}
	return (ptr);
}
