/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 15:35:09 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/11 15:37:42 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int		ft_is_charset(char *str, char *charset)
{
	int i;

	i = -1;
	while (charset[++i] != '\0')
		if (str[0] == charset[i])
			return (1);
	return (0);
}

static int		ft_to_malloc(char const *str, char *charset)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		while (ft_is_charset(&str[i], charset) == 1)
			i++;
		while (ft_is_charset(&str[i], charset) == 0 && str[i] != '\0')
			i++;
		if (ft_is_charset(&str[i - 1], charset) == 0)
			n++;
		if (str[i] != '\0')
			i++;
	}
	return (n);
}

static char		*ft_copy_w(char const *str, int n, int *sign, char *dest)
{
	int		i;

	i = -1;
	if (!(dest = malloc(sizeof(char) * n + 1)))
		*sign = 1;
	*dest = 0;
	while (++i != n)
		dest[i] = str[i];
	dest[i] = 0;
	return (dest);
}

static void		ft_do(char const *str, char *charset, char **split, int *sign)
{
	int		i;
	int		j;
	int		n;
	char	*dest;

	i = 0;
	j = 0;
	dest = 0;
	while (str[i] != '\0')
	{
		while (ft_is_charset(&str[i], charset) == 1)
			i++;
		n = 0;
		while (ft_is_charset(&str[i + n], charset) == 0 && str[i + n] != '\0')
			n++;
		if (n != 0)
		{
			split[j] = ft_copy_w(&str[i], n, sign, &dest[j]);
			j++;
			i += n;
		}
		if (*sign == 1)
			break ;
	}
}

char			**ft_split(char const *s, char c)
{
	char	**split;
	char	*charset;
	int		sign;

	*charset = c;
	sign = 0;
	if (!(split = malloc(sizeof(char *) * (ft_to_malloc(s, charset) + 1))))
		return (0);
	*split = 0;
	ft_do(s, charset, split, &sign);
	if (sign == 1)
		return (0);
	split[ft_to_malloc(s, charset)] = 0;
	return (split);
}
