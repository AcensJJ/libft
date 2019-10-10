/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_calloc.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 16:21:36 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/10 13:26:41 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_lib.h"

void	*calloc(size_t count, size_t size)
{
	void	*ptr;

	if (!(ptr = malloc(size * count))
	|| count == 0 || size == 0)
		return (NULL);
	ft_bzero(ptr, count);
	return (ptr);
}
