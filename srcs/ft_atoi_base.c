/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 18:57:32 by jacens            #+#    #+#             */
/*   Updated: 2021/01/14 14:13:05 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_return_nb(char *chiffre, char *base)
{
	int i;

	i = 0;
	while (*chiffre != base[i] && base[i] != '\0')
		i++;
	if (*chiffre == base[i] && base[i] != '\0')
		return (i);
	else
		return (-1);
}

int				ft_atoi_base(char *str, char *base)
{
	int signe;
	int nb;
	int	len;

	nb = 0;
	signe = 1;
	len = ft_strlen(base);
	if (ft_check_base(base) == 1)
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signe *= -1;
		++str;
	}
	while (ft_return_nb(str, base) >= 0)
	{
		nb = nb * len + ft_return_nb(str, base);
		++str;
	}
	nb *= signe;
	return (nb);
}
