/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 14:17:44 by aabda             #+#    #+#             */
/*   Updated: 2022/07/07 14:15:05 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
