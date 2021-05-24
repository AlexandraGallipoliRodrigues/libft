#include "libft.h"

int ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

int main(void)
{
	printf("%i\n", ft_isalpha('a'));
	printf("%i\n", isalpha('a'));
	return (0);
}

