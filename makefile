NAME = libft.a

BONUS = libft.a

SRCS = srcs/ft_atoi.c\
		srcs/ft_bzero.c\
		srcs/ft_calloc.c\
		srcs/ft_isalnum.c\
		srcs/ft_isalpha.c\
		srcs/ft_isascii.c\
		srcs/ft_isdigit.c\
		srcs/ft_isprint.c\
		srcs/ft_itoa.c\
		srcs/ft_memccpy.c\
		srcs/ft_memchr.c\
		srcs/ft_memcmp.c\
		srcs/ft_memcpy.c\
		srcs/ft_memmove.c\
		srcs/ft_memset.c\
		srcs/ft_putchar_fd.c\
		srcs/ft_putendl_fd.c\
		srcs/ft_putnbr_fd.c\
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
		srcs/ft_strstr.c

BNS = bonus/ft_lstadd_back_bonus.c\
		bonus/ft_lstadd_front_bonus.c\
		bonus/ft_lstclear_bonus.c\
		bonus/ft_lstdelone_bonus.c\
		bonus/ft_lstiter_bonus.c\
		bonus/ft_lstlast_bonus.c\
		bonus/ft_lstmap_bonus.c\
		bonus/ft_lstnew_bonus.c\
		bonus/ft_lstsize_bonus.c

INCLUDES = includes

OBJS = ${SRCS:.c=.o}

OBJSBNS = ${BNS:.c=.o}

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

%.o : %.c
		${CC} ${CFLAGS} -I ${INCLUDES} -c $< -o $@

$(NAME) : ${OBJS}
		ar rcs $@ $^

${BONUS} : ${OBJS} ${OBJSBNS}
		ar rcs $@ $^

all : $(NAME)

bonus : ${BONUS}

clean :
		${RM} ${OBJS} ${OBJSBNS}

fclean : clean
		${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re bonus