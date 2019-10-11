/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_fd.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 11:34:12 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/11 15:37:42 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static void		ft_print(char vtp, int fd)
{
	if (vtp != 0)
		write(fd, &vtp, 1);
	else
		write(fd, "0", 1);
}

void			ft_putnbr_fd(int n, int fd)
{
	long long	nb;
	long long	i;
	long long	reste;
	char		vtp;

	nb = n;
	i = 10;
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	while (nb >= i)
		i *= 10;
	while (i >= 10)
	{
		i /= 10;
		reste = nb % i;
		vtp = ((nb - reste) / i) + 48;
		ft_print(vtp, fd);
		nb = reste;
	}
}
