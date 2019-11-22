# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/10/18 15:41:28 by jacens       #+#   ##    ##    #+#        #
#    Updated: 2019/11/22 13:47:27 by jacens      ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME    =   libft.a

CC      =   gcc 
CFLAGS  =   -Wall -Wextra -Werror
HEADER =    include/
LFLAGS  =   -I $(HEADER)

SRCS =  srcs/ft_atoi.c\
		srcs/ft_atoi_base.c\
		srcs/ft_bzero.c\
		srcs/ft_calloc.c\
		srcs/ft_isalnum.c\
		srcs/ft_isalpha.c\
		srcs/ft_isascii.c\
		srcs/ft_isdigit.c\
		srcs/ft_isprint.c\
		srcs/ft_count_nbr.c\
		srcs/ft_itoa.c\
		srcs/ft_uitoa.c\
		srcs/ft_memccpy.c\
		srcs/ft_memchr.c\
		srcs/ft_memcmp.c\
		srcs/ft_memcpy.c\
		srcs/ft_memmove.c\
		srcs/ft_memset.c\
		srcs/ft_putchar_fd.c\
		srcs/ft_putendl_fd.c\
		srcs/ft_putnbr_fd.c\
		srcs/ft_check_base.c\
		srcs/ft_putnbr_base.c\
		srcs/ft_putstr_fd.c\
		srcs/ft_split.c\
		srcs/ft_strchr.c\
		srcs/ft_strcpy.c\
		srcs/ft_strdup.c\
		srcs/ft_strjoin.c\
		srcs/ft_strlcat.c\
		srcs/ft_strlcpy.c\
		srcs/ft_strlen.c\
		srcs/ft_strmapi.c\
		srcs/ft_strncmp.c\
		srcs/ft_strnstr.c\
		srcs/ft_strrchr.c\
		srcs/ft_strtrim.c\
		srcs/ft_substr.c\
		srcs/ft_tolower.c\
		srcs/ft_toupper.c\
		srcs/ft_strstr.c\
		srcs/ft_strcmp.c\
		srcs/ft_count_nbr_base.c\
		srcs/ft_itoa_base.c\
		srcs/ft_uitoa_base.c\
		srcs/ft_strcat.c\

GNL	  = gnl/get_next_line.c\
		gnl/get_next_line_utils.c\

BONUS = bonus/ft_lstadd_back_bonus.c\
		bonus/ft_lstadd_front_bonus.c\
		bonus/ft_lstclear_bonus.c\
		bonus/ft_lstdelone_bonus.c\
		bonus/ft_lstiter_bonus.c\
		bonus/ft_lstlast_bonus.c\
		bonus/ft_lstmap_bonus.c\
		bonus/ft_lstnew_bonus.c\
		bonus/ft_lstsize_bonus.c\

OBJ    =   $(SRCS:.c=.o) $(BONUS:.c=.o) $(GNL:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) $(LFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re