/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 14:17:44 by aabda             #+#    #+#             */
/*   Updated: 2022/07/04 18:50:13 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dsize;
	size_t	i;

	dsize = 0;
	i = 0;
	while (dest[dsize] && dsize < size)
		dsize++;
	while (src[i] && dsize + i + 1 < size)
	{
		dest[dsize + i] = src[i];
		i++;
	}
	if (dsize != size)
		dest[dsize + i] = '\0';
	return ((size_t)ft_strlen(src) + dsize);
}

// int main(void)
// {
// 	char	dest[50] = "Salut";
// 	char	src[50] = "ABCD";

// 	printf("dest = %s\n", dest);
// 	printf("src = %s\n", src);
// 	printf("result = %lu\n", strlcat(dest, src, 10));
// 	printf("dest = %s\n", dest);
// 	printf("src = %s\n\n", src);

// 	char	dest2[50] = "Salut";
// 	char	src2[50] = "ABCD";

// 	printf("dest = %s\n", dest2);
// 	printf("src = %s\n", src2);
// 	printf("result = %lu\n", ft_strlcat(dest2, src2, 10));
// 	printf("dest = %s\n", dest2);
// 	printf("src = %s\n", src2);

// 	return (0);
// }
