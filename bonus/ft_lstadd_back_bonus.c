/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstadd_back_bonus.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 16:26:52 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/11 17:22:48 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *beg_lst;

	beg_lst = *alst;
	while(beg_lst->next != NULL)
		beg_lst = beg_lst->next;
	beg_lst->next = new;
	new->next = NULL;
}
