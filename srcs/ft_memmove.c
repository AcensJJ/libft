/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 14:28:22 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/08 16:08:08 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	char			*dest;
	char			*ptr;
	char			*save;

	dest = (char *) dst;
	ptr = (char *) src;
	i = 0;
	while (i != len)
	{
		save[i] = ptr[i];
		i++;
	}
	save[i] = '\0';
	i = 0;
	while (i != len)
	{
		dest[i] = save[i];
		i++;
	}
	return (dst);
}
