/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallipo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 13:52:41 by agallipo          #+#    #+#             */
/*   Updated: 2021/05/21 14:47:57 by agallipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int	c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == c)
			return ((char *)s + i);
		i++;
	}
	if (n == 0)
		return (0);
	return (0);
}

int main (void)
{
	char str[] = "hlaalaa";
	printf("%s\n", ft_memchr(str, 'l', 2));
	printf("%s", memchr(str, 'l', 2));
	return (0);
}
