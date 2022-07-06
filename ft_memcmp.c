/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 23:09:00 by aabda             #+#    #+#             */
/*   Updated: 2022/07/07 00:07:24 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    return (ft_strncmp((const char *)s1, (const char *)s2, n));
}

int main(void)
{
    char    str[] = "Salut pote !";
    char    str2[] = "Sut pote !";
    
    printf("%d\n", memcmp(str, str2, 1));
    printf("%d\n", ft_memcmp(str, str2, 1));

    return (0);
}