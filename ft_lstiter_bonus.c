/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstiter_bonus.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/14 11:50:09 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/22 19:09:18 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*beg_lst;

	if (lst == NULL || f == NULL)
		return ;
	beg_lst = lst;
	while (beg_lst != NULL)
	{
		f(beg_lst->content);
		beg_lst = beg_lst->next;
	}
}
