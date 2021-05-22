#include <stdio.h>
#include <ctype.h>

int ft_isascii(int  n)
{
	if (n >= 0 && n <= 0177)
		return (1);
	else
		return (0);
}

int main(void)
{
	int str = 7777;
	printf("%i\n", isascii(str));
	printf("%i", ft_isascii(str));
	return (0);
}
