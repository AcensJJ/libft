/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 15:48:23 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/10 13:26:15 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_lib.h"

int		ft_atoi(const char *str)
{
	int	nb;
	int	sign;
	int i;

	i = 0;
	sign = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		++i;
	while (str[i] == '+' || str[i] == '-')
	{
		if ((str[i] == '-' && (sign == -1)) || (str[i] == '+' && (sign == 1)))
			return (0);
		if (str[i] == '-')
			sign = -1;
		if (str[i] == '+')
			sign = 1;
		++i;
	}
	if (sign == 0)
		sign = 1;
	while (str[i] >= '0' && str[i] <= '9')
		nb = nb * 10 + str[i++] - '0';
	return (nb * sign);
}
