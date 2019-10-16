/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncmp.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 15:19:31 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 14:39:18 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		c;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	if (n == 0)
		return (0);
	c = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (c);
}
