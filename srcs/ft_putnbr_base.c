/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_base.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/07 18:57:24 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/11 05:44:22 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static void		ft_print(char print, char *base)
{
	int i;

	i = print;
	write(1, &base[i], 1);
}

void			ft_putnbr_base(int nbr, char *base)
{
	long long	n;
	long long	i;
	char		print;
	int			len;

	if (ft_check_base(base))
		return ;
	i = ft_strlen(base);
	n = nbr;
	len = i;
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
	}
	while (n >= i)
		i *= len;
	while (i >= len)
	{
		i /= len;
		print = (n - (n % i)) / i;
		ft_print(print, base);
		n = n % i;
	}
}
