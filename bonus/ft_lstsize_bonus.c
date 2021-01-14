/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:18:35 by jacens            #+#    #+#             */
/*   Updated: 2021/01/14 14:13:05 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*beg_lst;

	if (lst == NULL)
		return (0);
	beg_lst = lst;
	size = 0;
	while (beg_lst != NULL)
	{
		++size;
		beg_lst = beg_lst->next;
	}
	return (size);
}
