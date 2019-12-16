/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa_base.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/11 06:29:53 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/13 16:26:14 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static void		ft_config_ptr2(long long nb, long long i, char *ptr, char *base)
{
	long long		reste;
	long long		j;
	long long		len;

	j = -1;
	len = i;
	if (nb < 0)
	{
		nb *= -1;
		ptr[++j] = '-';
	}
	while (nb >= i)
		i *= len;
	while (i >= len)
	{
		i /= len;
		reste = nb % i;
		ptr[++j] = base[((nb - reste) / i)];
		nb = reste;
	}
	ptr[++j] = 0;
}

char			*ft_itoa_base(long n, char *base)
{
	char			*ptr;
	long long		nb;
	long long		i;

	nb = n;
	i = ft_strlen(base);
	if (!(ptr = malloc(ft_count_nbr_base(nb, i) + 1)))
		return (NULL);
	*ptr = 0;
	ft_config_ptr2(nb, i, ptr, base);
	return (ptr);
}
