/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallipo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 19:01:29 by agallipo          #+#    #+#             */
/*   Updated: 2021/05/20 21:25:47 by agallipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (!dest && !src)
			return (NULL);
		if (((unsigned char *)src)[i] == c)
		{
			(((unsigned char *)dest)[i]) = (((unsigned char *)src)[i]);
			return (dest + ++i);
		}
		(((unsigned char *)dest)[i]) = (((unsigned char *)src)[i]);
		i++;
	}
	return (dest);
}

int main(void)
{
	char src[] = "holaa";
	char dest[] = "pepe";

	memccpy(dest, src, 'a', 4);
	printf("%s", dest);
	 char src1[] = "holaa";
	 char dest1[] = "pepe";
	ft_memccpy(dest1, src1, 'a', 4);
	printf("%s", dest1);
	return (0);
 
}
