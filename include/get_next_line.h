/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.h                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/24 13:53:48 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/14 18:37:36 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <string.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# define BUFFER_SIZE	4096

typedef struct		s_list
{
	int				fd;
	char			*buffer;
	char			*line;
	struct s_list	*next;
}					t_list;

void				ft_del_list(t_list **lst, t_list *lst_fd);
char				*ft_strdup(const char *src);
size_t				ft_strlchr(const char *s, int chr);
void				ft_strdel(t_list *lst_fd);
char				*ft_strcat_line(char *dest, char *src);
int					get_next_line(int fd, char **line);
#endif
