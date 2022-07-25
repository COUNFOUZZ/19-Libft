/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:33:13 by aabda             #+#    #+#             */
/*   Updated: 2022/07/25 16:48:47 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*new;
	t_list	*next;

	if (lst && *lst && del)
	{
		new = *lst;
		while (new)
		{
			next = new->next;
			ft_lstdelone(new, del);
			new = next;
		}
		*lst = NULL;
	}
}
