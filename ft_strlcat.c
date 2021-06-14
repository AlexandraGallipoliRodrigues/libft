/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallipo <agallipo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 10:19:30 by agallipo          #+#    #+#             */
/*   Updated: 2021/06/10 17:45:24 by agallipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	ts;
	size_t	td;

	ts = ft_strlen(src);
	td = ft_strlen(dest);
	i = 0;
	if (destsize < (td + 1))
		return (destsize + ts);
	if (destsize > (td + 1))
	{
		while (src[i] != '\0' && (td + i + 1) < destsize)
		{
			dest[td + i] = src[i];
			i++;
		}
	}
	dest[td + i] = '\0';
	return (ts + td);
}
/*
size_t		ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (dstsize < dest_len + 1)
		return (dstsize + src_len);
	if (dstsize > dest_len + 1)
	{
		while (src[i] != '\0' && dest_len + 1 + i < dstsize)
		{
			dest[dest_len + i] = src[i];
			i++;
		}
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}*/

/*int main(void)
{
		char *dest;
		memset(dest, 'r', 14);
		printf("%i", ft_strlcat(dest, "lorem ipsum dolor sit amet", 15));
		write(1, "\n", 1);
		write(1, dest, 15);
	return(0);
}*/
