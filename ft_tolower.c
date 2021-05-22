#include <ctype.h>
#include <stdio.h>

int ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	   c += 32;
	return (c);
}

int main(void)
{
	printf("%c", ft_tolower('9'));
	printf("%c", tolower('9'));
	return (0);
}
