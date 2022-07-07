/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:42:22 by aabda             #+#    #+#             */
/*   Updated: 2022/07/07 20:07:25 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (str[i] && i < n)
	{
		if (str[i] == c)
			return ((unsigned char *)(str + i));
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char str[] = "Salut mon pote !";

	printf("%s\n", memchr(str, 'm', 10));
	printf("%s\n", ft_memchr(str, 'm', 10));

	return (0);
}
