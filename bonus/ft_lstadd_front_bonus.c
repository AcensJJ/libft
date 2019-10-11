/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstadd_front_bonus.c                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 13:49:38 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/11 17:32:32 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_listadd_front(t_list **alst, t_list *new)
{
	t_list *beg_lst;

	beg_lst = *alst;
	new->next = beg_lst;
	beg_lst = new;
}
 