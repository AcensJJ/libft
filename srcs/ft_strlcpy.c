/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 15:14:44 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/10 13:34:31 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_lib.h"

unsigned	int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)src;
	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i != size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}
