/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/15 17:10:02 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/15 17:19:16 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *to_find)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	str = (char *)haystack;
	if (to_find[0] != '\0')
	{
		while (str[i] != '\0')
		{
			j = 0;
			while (str[i + j] == to_find[j] && to_find[j] != '\0')
			{
				if (to_find[j + 1] == '\0' && str[i + j] == to_find[j])
					return (&str[i]);
				j++;
			}
			i++;
		}
		return (0);
	}
	else
		return (&str[0]);
}
