/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekulichk <ekulichk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:05:34 by ekulichk          #+#    #+#             */
/*   Updated: 2022/11/08 15:13:54 by ekulichk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp_next;

	if (!*lst)
		return ;
	while (*lst)
	{
		temp_next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp_next;
	}
}
