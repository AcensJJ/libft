/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:16:12 by jacens            #+#    #+#             */
/*   Updated: 2021/01/14 14:13:05 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_config_ptr(long long nb, long long i, long long j, char *ptr)
{
	long long	reste;

	if (nb < 0)
	{
		nb *= -1;
		ptr[++j] = '-';
	}
	while (nb >= i)
		i *= 10;
	while (i >= 10)
	{
		i /= 10;
		reste = nb % i;
		ptr[++j] = ((nb - reste) / i) + 48;
		nb = reste;
	}
	ptr[++j] = 0;
}

char			*ft_itoa(int n)
{
	char			*ptr;
	long long		nb;
	long long		i;
	long long		j;

	nb = n;
	j = -1;
	if (!(ptr = malloc(ft_count_nbr(nb) + 1)))
		return (NULL);
	*ptr = 0;
	i = 10;
	ft_config_ptr(nb, i, j, ptr);
	return (ptr);
}
