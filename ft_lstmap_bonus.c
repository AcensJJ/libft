/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap_bonus.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/14 11:50:24 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/22 19:36:57 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*beg_lst;
	t_list	*n_beg_lst;
	t_list	*n_ele;

	if (lst == NULL || f == NULL)
		return ;
	beg_lst = lst;
	if (!(n_beg_lst = malloc(ft_lstsize(lst))))
		return (0);
	while (beg_lst != NULL)
	{
		if (!(n_ele = ft_lstnew(f(beg_lst->content))))
		{
			ft_lstclear(n_beg_lst, del);
			return (NULL);
		}
		ft_lstadd_back(n_beg_lst, n_ele);
		beg_lst = beg_lst->next;
	}
	return (n_beg_lst);
}
