/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memset.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 11:14:46 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/18 12:01:04 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)b;
	if (ptr == 0)
		return (0);
	i = 0;
	while (i != len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}
