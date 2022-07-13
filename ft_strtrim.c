/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 14:53:52 by aabda             #+#    #+#             */
/*   Updated: 2022/07/13 15:50:25 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	len_set;

	str = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!str)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
	{
		len_set = 0;
		while (set[len_set])
		{
			if (s1[i] == set[len_set])
				i++;
			len_set++;
		}
		str[j] = s1[i];
		i++;
		j++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "Salut pote";

// 	printf("%s\n", ft_strtrim(str, "auoe"));

// 	return (0);
// }
