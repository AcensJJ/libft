/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 11:25:04 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/08 12:42:17 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
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
		i++;
	}
	return (dst);
}
