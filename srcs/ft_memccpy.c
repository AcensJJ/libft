/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 13:45:12 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/08 14:29:25 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	char			*dest;
	char			*ptr;

	dest = (char *) dst;
	ptr = (char *) src;
	i = 0;
	while (i != n)
	{
		dest[i] = ptr[i];
		if (ptr[i] == (unsigned char) c)
			return (dest[++i]);
		i++;
	}
	return (dst);
}
