/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:47:47 by aabda             #+#    #+#             */
/*   Updated: 2022/07/06 16:47:20 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)b;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}

// int	main(void)
// {
// 	char str[] = "Salut pote !";
// 	char str2[] = "Salut pote !";

// 	 memset(str, '*', 30);
// 	ft_memset(str2, '*', 30);

// 	while (1)
// 	{
// 		/* code */
// 	}
// 	printf("%s\n", str);
// 	printf("%s\n", str2);

// 	return (0);
// }