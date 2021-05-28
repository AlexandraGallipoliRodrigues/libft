#include "libft.h"
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int	main(void)
{
	char a[] = "hkanslnsajnksajbskajbsakola";
//	int b[] = {1, 2, 3, 4, 5};
	
	ft_bzero(a, 2);
	printf("%s", a);
	//bzero(a, 2);
	printf("%s jgg", a);

	int i = 0;
	while (i < 10)
	{
		write(1, &a[i], 1);
		i++;
	}
	return (0);
}*/
