/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 11:40:10 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/09 14:03:36 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*h;
	char	*n;

	h = (char *)haystack;
	n = (char *)needle;
	i = 0;
	if (needle[0] != '\0')
	{
		while (haystack[i] != '\0' && i < len - 1)
		{
			j = 0;
			while (haystack[i + j] == needle[j] && needle[j] != '\0')
			{
				if (needle[j + 1] == '\0' && haystack[i + j] == needle[j])
					return (&h[i]);
				j++;
			}
			i++;
		}
		return (0);
	}
	else
		return (&n[0]);
}
