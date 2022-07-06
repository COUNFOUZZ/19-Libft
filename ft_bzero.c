/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:51:19 by aabda             #+#    #+#             */
/*   Updated: 2022/07/06 17:08:52 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

// int	main(void)
// {
// 	char s[] = "Salut pote !";
// 	char s2[] = "Salut pote !";

// 	bzero(s + 1, 1);
// 	ft_bzero(s2 + 1, 1);
// 	printf("%s\n", s);
// 	printf("%s\n", s2);

// 	return (0);
// }