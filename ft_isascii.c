#include "libft.h"

int	ft_isascii(int n)
{
	if (n >= 0 && n <= 0177)
		return (1);
	else
		return (0);
}
