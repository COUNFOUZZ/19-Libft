/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:06:13 by aabda             #+#    #+#             */
/*   Updated: 2022/07/10 14:27:45 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	// if (!src || !dest)
	// 	return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned const char *)src)[i];
		i++;
	}
	return (dest);
}
