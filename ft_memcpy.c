/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallipo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 18:01:41 by agallipo          #+#    #+#             */
/*   Updated: 2021/05/20 18:57:25 by agallipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, const void *src, size_t n)
{
	size_t	i;
	
	i = 0;
	while (i < n  && (((unsigned char *)src)[i]))
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

int main(void)
{
	char src[] = "holaa";
	char dest[] = "adioos";

	printf("%s\n", ft_memcpy(dest, src, 8));
	printf("%s", memcpy(dest, src, 8));
	return (0);
}
