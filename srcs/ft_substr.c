/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_substr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 10:59:20 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/18 11:48:47 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*ptr;

	i = 0;
	if (!(ptr = malloc(len + 1)) || s == 0)
		return (NULL);
	*ptr = 0;
	if (!(start > ft_strlen(s)))
		while (i != len && s[start])
			ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}
