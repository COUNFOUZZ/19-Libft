/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 14:17:44 by aabda             #+#    #+#             */
/*   Updated: 2022/07/18 15:28:19 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dsize;
	size_t	i;

	dsize = 0;
	i = 0;
	while (dst[dsize] && dsize < dstsize)
		dsize++;
	while (src[i] && dsize + i + 1 < dstsize)
	{
		dst[dsize + i] = src[i];
		i++;
	}
	if (dsize != dstsize)
		dst[dsize + i] = '\0';
	return ((size_t)ft_strlen(src) + dsize);
}
