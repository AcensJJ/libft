/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 05:41:28 by jacens            #+#    #+#             */
/*   Updated: 2021/01/14 14:13:05 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_check_base(char *base)
{
	int i;
	int j;

	i = -1;
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-' ||
		(base[i] <= 31) || base[i] == 127)
			return (1);
		j = -1;
		while (base[++j])
			if (base[i] == base[j] && i != j)
				return (1);
	}
	if (i < 2)
		return (1);
	return (0);
}
