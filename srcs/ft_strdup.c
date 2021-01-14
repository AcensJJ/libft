/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:07:08 by jacens            #+#    #+#             */
/*   Updated: 2021/01/14 14:13:05 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char		*dest;
	size_t		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (!(dest = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	*dest = 0;
	ft_strcpy(dest, src);
	return (dest);
}
