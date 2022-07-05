/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:42:22 by aabda             #+#    #+#             */
/*   Updated: 2022/07/05 20:04:12 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char *str = "Salut mon ] pote !";

// 	printf("%s\n", strchr(str, 'l'));
// 	printf("%s\n\n", ft_strchr(str, 'l'));

// 	printf("%s\n", strchr(str, ' '));
// 	printf("%s\n\n", ft_strchr(str, ' '));

// 	printf("%s\n", strchr(str, ']'));
// 	printf("%s\n\n", ft_strchr(str, ']'));

// 	printf("%s\n", strchr(str, 'z'));
// 	printf("%s\n", ft_strchr(str, 'z'));

// 	return (0);
// }
