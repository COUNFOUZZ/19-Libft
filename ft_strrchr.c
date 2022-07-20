/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:19:51 by aabda             #+#    #+#             */
/*   Updated: 2022/07/20 17:24:27 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	position;

	i = 0;
	position = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			position = i;
		i++;
	}
	if (position > 0 || (unsigned char)s[0] == (unsigned char)c)
		return ((char *)&s[position]);
	if (s[i] == 0 && c == 0)
		return ((char *)&s[i]);
	return (NULL);
}
