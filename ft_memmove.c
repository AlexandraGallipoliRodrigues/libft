/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallipo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 21:35:14 by agallipo          #+#    #+#             */
/*   Updated: 2021/06/02 22:23:48 by agallipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*aux_dest;
	unsigned char	*aux_src;

	aux_dest = ((unsigned char *)dest);
	aux_src = ((unsigned char *)src);
	i = 0;
	while (i < len)
	{
		aux_dest[i] = aux_src[i];
		i++;
	}
	return (dest);
}
