/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallipo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:57:11 by agallipo          #+#    #+#             */
/*   Updated: 2021/05/25 14:01:37 by agallipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_containchar(char *str, char c)
{
	while (*str)
	{
		if (*str++ == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char *s1, char *set)
{
	int	first_char;
	int	last_char;
	int	i;
	int	s1_len;

	first_char = -1;
	last_char = -1;
	i = 0;
	while (s1[i] != '\0')
	{
		if (!ft_containchar(set, s1[i]))
		{
			if (first_char == -1)
				first_char = i;
			if (first_char != -1)
				last_char = i;
		}
		i++;
	}
	s1_len = (last_char + 1) - first_char;
	return (ft_substr(s1, first_char, s1_len));
}

int	main(void)
{
	printf("%s\n", ft_strtrim("aslahellosal", "sal"));
	return (0);
}
