/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstadd_back_bonus.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 16:26:52 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/22 19:05:27 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *beg_lst;

	if (alst == NULL || new == NULL)
		return ;
	if (*alst == NULL)
	{
		*alst = new;
		new->next = NULL;
	}
	else
	{
		beg_lst = ft_lstlast(*alst);
		beg_lst->next = new;
	}
}
