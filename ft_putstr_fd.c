#include "libft.h"
#include <unistd.h>
void	ft_putchr_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd)
{
	int	i;

i = 0;
	while (s[i] != '\0')
	{
		ft_putchr_fd(s[i], fd);
		i++;
	}
}

