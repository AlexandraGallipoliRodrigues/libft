/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallipo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 10:19:30 by agallipo          #+#    #+#             */
/*   Updated: 2021/05/20 10:55:23 by agallipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	ts;
	size_t	td;

	ts = ft_strlen ((char*)src);
	td = ft_strlen(dest);
	i = 0;
	while (src[i] != 0 && (td + i + 1) < destsize)
	{
		if ((td + i + 1) < destsize)
			(dest[td + i] = src[i]);
		i++;
	}
	dest[td + i] = 0;
	if (destsize < td)
		return (ts + destsize);
	else
		return (ts + td);
}

int	main(void)
{
	char	dest[] = "holaaa";
	char	src[] = "bola";
	printf("%zu\n", ft_strlcat(dest, src, 5));
	printf("%lu", strlcat(dest, src, 5));
	return (0);
}