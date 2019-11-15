/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_count_nbr.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/15 15:15:57 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/15 15:16:20 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_nbr(long long n)
{
	long long	i;
	long long	count;

	count = 1;
	i = 10;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n >= i)
	{
		i *= 10;
		count++;
	}
	return (count);
}
