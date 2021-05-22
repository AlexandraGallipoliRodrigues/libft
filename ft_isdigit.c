#include <ctype.h>
#include <stdio.h>

int ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int main (void)
{
	printf("%i\n", ft_isdigit('0'));
	printf("%i", isdigit('0'));
	return (0);
}
