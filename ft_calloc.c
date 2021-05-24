#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(size * count);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (count * size));
	return (ptr);
}

int	 main(void)
{
	char *str = "holaaaa";
	str = ft_calloc(3, 1);
	printf("%s", str);
	return (0);
}

