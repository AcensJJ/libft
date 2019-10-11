/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 16:29:57 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/11 15:37:42 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		c;
	char	*vs1;
	char	*vs2;

	i = 0;
	c = 0;
	vs1 = (unsigned char *)s1;
	vs2 = (unsigned char *)s2;
	while (i != n && vs1[i] == vs2[i])
		i++;
	c = vs1[i] - vs2[i];
	return (c);
}
