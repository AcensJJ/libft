/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstclear_bonus.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/13 18:11:50 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/23 13:21:40 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *beg_lst;
	t_list *temp;

	if (lst == NULL || del == NULL)
		return ;
	beg_lst = *lst;
	while (beg_lst)
	{
		temp = beg_lst->next;
		ft_lstdelone(beg_lst, del);
		beg_lst = temp;
	}
	*lst = NULL;
}
