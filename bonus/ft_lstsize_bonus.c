/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstsize_bonus.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 16:18:35 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/18 15:48:49 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft.h"

int		ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*beg_lst;

	beg_lst = lst;
	size = 0;
	while (beg_lst != NULL)
	{
		++size;
		beg_lst = beg_lst->next;
	}
	return (size);
}
