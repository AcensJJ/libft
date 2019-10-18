/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 11:26:09 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/18 13:07:54 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	long		i;
	char		*ptr;

	ptr = (char *)s;
	i = -1;
	if (c == 0)
		return (ptr + ft_strlen(ptr));
	while (ptr[++i] != '\0')
		if (ptr[i] == (char)c)
			return (&ptr[i]);
	return (NULL);
}
