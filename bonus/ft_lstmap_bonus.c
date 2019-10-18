/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap_bonus.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/14 11:50:24 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/18 14:47:54 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(void *), void (*del)(void *))
{
	t_list	*beg_lst;
	t_list	*n_beg_lst;
	t_list	*n_lst;

	beg_lst = lst;
	if (!(n_beg_lst = malloc(ft_lstsize(lst))))
		return (0);
	n_lst = n_beg_lst;
	while (beg_lst != NULL)
	{
		n_beg_lst = f(beg_lst->content);
		n_beg_lst = beg_lst->next;
		beg_lst = beg_lst->next;
	}
	(void)del;
	return (n_beg_lst);
}
