/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa_base.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/11 06:29:53 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/15 15:17:32 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static void		ft_config_ptr(long long nb, long long i, char *ptr, int base)
{
	long long	reste;
	long long		j;

	j = -1;
	if (nb < 0)
	{
		nb *= -1;
		ptr[++j] = '-';
	}
	while (nb >= i)
		i *= base;
	while (i >= base)
	{
		i /= base;
		reste = nb % i;
		ptr[++j] = ((nb - reste) / i) + 48;
		nb = reste;
	}
	ptr[++j] = 0;
}

char	*ft_itoa_base(long n, int base)
{
	char			*ptr;
	long long		nb;
	long long		i;

	nb = n;
	if (!(ptr = malloc(ft_count_nbr_base(nb, base) + 1)))
		return (NULL);
	*ptr = 0;
	i = base;
	ft_config_ptr(nb, i, ptr, base);
	return (ptr);
}
