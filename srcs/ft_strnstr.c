/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 11:40:10 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/15 17:18:21 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*h;

	h = (char *)haystack;
	i = 0;
	if (needle[0] != '\0')
	{
		if (len == ft_strlen(needle) && len == ft_strlen(haystack))
			return (h);
		while (haystack[i] != '\0' && i < len - 1)
		{
			j = 0;
			while (haystack[i + j] == needle[j] && needle[j] != '\0' &&
			j < len - 1)
			{
				if ((needle[j + 1] == '\0' && haystack[i + j] == needle[j]))
					return (&h[i]);
				j++;
			}
			i++;
		}
		return (0);
	}
	return (h);
}
