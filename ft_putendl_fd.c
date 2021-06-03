#include "libft.h"
#include <unistd.h>

void	ft_putchr_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchr_fd('\n', fd);
}
