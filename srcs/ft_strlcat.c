/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 15:00:38 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/07 15:04:27 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

unsigned	int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i] && i + j < size - 1 && size != 0)
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	while (src[i])
		i++;
	if (j > size)
		return (size + i);
	return (i + j);
}
