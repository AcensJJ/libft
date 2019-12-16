/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.h                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/24 13:53:48 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/16 21:31:35 by jacens      ###    #+. /#+    ###.fr     */
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

typedef struct			s_list_gnl
{
	int					fd;
	char				*buffer;
	char				*line;
	struct s_list_gnl	*next;
}						t_list_gnl;

int						get_next_line(int fd, char **line);
void					ft_del_list(t_list_gnl **lst, t_list_gnl *lst_fd);
char					*ft_strdup(const char *src);
size_t					ft_strlchr(const char *s, int chr);
void					ft_strdel(t_list_gnl *lst_fd);
char					*ft_strcat_line(char *dest, char *src);
#endif
