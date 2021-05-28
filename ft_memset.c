#include "libft.h"

void	*ft_memset(void *b,int c, size_t len)
{
	size_t				i;

	i = 0;
	while (i < len)
	{
		(((unsigned char *)b)[i]) = ((unsigned char)c);
		i++;
	}
	return(b);
}
/*int main(void)
{
	char a[] = "hahaha";
	int	b[]= {1, 2, 3, 4, 5};

	printf("%s\n", memset(a, '+', 2));
	printf("%s", ft_memset(a, '+', 2));
	return (0);
}*/
