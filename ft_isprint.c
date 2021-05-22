#include <ctype.h>
#include <stdio.h>

int ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

int main(void)
{
	printf("%d",  ft_isprint('~'));
	printf("%d", isprint('~'));
	return (0);
}
