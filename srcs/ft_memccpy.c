/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 13:45:12 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/22 15:23:05 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*ptr;

	dest = (unsigned char *)dst;
	ptr = (unsigned char *)src;
	i = 0;
	while (i != n)
	{
		dest[i] = ptr[i];
		if (ptr[i] == (unsigned char)c)
			return (&dest[++i]);
		i++;
	}
	return (NULL);
}
