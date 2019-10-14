/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 14:00:05 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/14 14:59:11 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_trim(char const *s1, char const *set)
{
	unsigned int	count;
	long long		i;
	long long		j;

	i = -1;
	count = 0;
	while (s1[++i])
	{
		j = 0;
		while (set[j] && set[j] != s1[i])
			j++;
		if (s1[i] != set[j])
			count++;
	}
	return (count);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	long long		i;
	long long		j;
	long long		k;
	char			*ptr;

	if (!(ptr = malloc(ft_count_trim(s1, set) + 1)))
		return (NULL);
	*ptr = 0;
	i = -1;
	k = -1;
	while (s1[++i])
	{
		j = 0;
		while (set[j] && set[j] != s1[i])
			j++;
		if (s1[i] != set[j])
			ptr[++k] = s1[i];
	}
	ptr[++k] = 0;
	return (ptr);
}
