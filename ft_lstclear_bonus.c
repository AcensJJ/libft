/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstclear_bonus.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/13 18:11:50 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/22 15:55:50 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *beg_lst;

	beg_lst = *lst;
	while (beg_lst->next != NULL)
	{
		del(beg_lst->content);
		free(beg_lst);
		lst = &beg_lst->next;
	}
}
