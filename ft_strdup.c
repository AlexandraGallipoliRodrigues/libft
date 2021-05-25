#include "libft.h"
#include <string.h>
#include <stdio.h> 

char *ft_strdup(const char *s1)
{
	char	*ptr;
	int		size;
	int		i;

	size = strlen(s1);
	ptr = (char *)malloc(size + 1);
	i = 0;
	if (!ptr)
		return (NULL);
	while (size--)
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int	main(void)
{
	char s[4] = "hlaa";
	ft_strdup(s);

	printf("%s", s);
	return (0);
}


