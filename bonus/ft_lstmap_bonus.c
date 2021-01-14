/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 11:50:24 by jacens            #+#    #+#             */
/*   Updated: 2021/01/14 14:13:05 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*beg_lst;
	t_list	*head;
	t_list	*node;

	if (lst == NULL || f == NULL)
		return (NULL);
	beg_lst = lst;
	if (!(head = ft_lstnew(f(beg_lst->content))))
		return (NULL);
	beg_lst = beg_lst->next;
	while (beg_lst != NULL)
	{
		if (!(node = ft_lstnew(f(beg_lst->content))))
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, node);
		beg_lst = beg_lst->next;
	}
	return (head);
}
