/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 11:40:10 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 15:00:13 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*h;

	h = (char *)haystack;
	i = 0;
	if (needle[0] == '\0')
		return (h);
	while (h[i])
	{
		if (h[i] == needle[0] && ft_strlen(needle) + i - 1 < len)
		{
			if (ft_strncmp((h + i), needle, ft_strlen(needle)) == 0)
				return (h + i);
		}
		i++;
	}
	return (NULL);
}
