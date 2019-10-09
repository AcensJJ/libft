/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 15:00:38 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/09 11:39:42 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i] && i + j < size - 1 && size != 0)
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	while (src[i])
		i++;
	if (j > size)
		return (size + i);
	return (i + j);
}
