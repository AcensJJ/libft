/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line_utils.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/24 13:53:51 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/18 10:52:31 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

void		ft_del_list(t_list_gnl **lst, t_list_gnl *lst_fd)
{
	t_list_gnl	*beg_lst;
	t_list_gnl	*tmp1;
	t_list_gnl	*tmp;
	int			fd;

	fd = -1;
	beg_lst = *lst;
	tmp = beg_lst;
	while (beg_lst != lst_fd)
	{
		tmp = beg_lst;
		beg_lst = beg_lst->next;
	}
	if (tmp == beg_lst)
		*lst = NULL;
	else if (tmp->next != NULL && beg_lst->next != NULL)
	{
		tmp1 = beg_lst->next;
		tmp->next = tmp1;
	}
	beg_lst->fd = fd;
	free(beg_lst->buffer);
	beg_lst->buffer = NULL;
	free(beg_lst);
	beg_lst = NULL;
}

size_t		ft_strlchr(const char *s, int chr)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == chr)
			return (i);
		i++;
	}
	return (i);
}

void		ft_strdel(t_list_gnl *lst_fd)
{
	size_t i;
	size_t j;

	j = 0;
	i = ft_strlchr(lst_fd->buffer, '\n') + 1;
	while (lst_fd->buffer[i] != '\0')
	{
		lst_fd->buffer[j] = lst_fd->buffer[i];
		i++;
		j++;
	}
	while (lst_fd->buffer[j] != '\0')
	{
		lst_fd->buffer[j] = '\0';
		j++;
	}
}

char		*ft_strcat_line(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && src[j] != '\n')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
