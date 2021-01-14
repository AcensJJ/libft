/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_nbr_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 15:16:59 by jacens            #+#    #+#             */
/*   Updated: 2021/01/14 14:13:05 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_nbr_base(long long n, int len)
{
	long long	i;
	long long	count;

	count = 1;
	i = len;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n >= i)
	{
		i *= len;
		count++;
	}
	return (count);
}
