#include <ctype.h>
#include <stdio.h>

int ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')\
			|| (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

int main (void)
{
	printf("%i\n", ft_isalnum('\t'));
	printf("%i", isalnum('\t'));
	return (0);
}
