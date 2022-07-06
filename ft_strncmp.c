/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 20:16:37 by aabda             #+#    #+#             */
/*   Updated: 2022/07/06 20:30:32 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	char s1[] = "Alexis";
// 	char s2[] = "Salut poe !";

// 	printf("%d\n", strncmp(s1, s2, 10));
// 	printf("%d\n", ft_strncmp(s1, s2, 10));

// 	return (0);
// }