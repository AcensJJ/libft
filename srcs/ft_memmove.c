/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 14:28:22 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/15 13:57:04 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (d < s)
		while (i != len)
		{
			d[i] = s[i];
			i++;
		}
	else if (d > s)
		while (len)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	return (dst);
}
