/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:19:51 by aabda             #+#    #+#             */
/*   Updated: 2022/07/05 15:30:37 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = (ft_strlen(s) - 1);
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i--;
	}

	return (NULL);
}

// int	main(void)
// {
// 	char *str = "a123a 4dddd4";

// 	printf("%s\n", strrchr(str, 'a'));
// 	printf("%s\n\n", ft_strrchr(str, 'a'));

// 	printf("%s\n", strrchr(str, '4'));
// 	printf("%s\n\n", ft_strrchr(str, '4'));

// 	printf("%s\n", strrchr(str, 'z'));
// 	printf("%s\n", ft_strrchr(str, 'z'));

// 	return (0);
// }
