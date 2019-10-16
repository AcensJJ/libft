/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_substr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 10:59:20 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 16:40:35 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*ptr;

	i = 0;
	if (!(ptr = malloc(len + 1)))
		return (NULL);
	*ptr = 0;
	while (i != len)
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}
