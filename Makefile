CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRCS =  ft_printchar.c ft_printdigit.c ft_printstr.c ft_printf.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
        ar rcs $(NAME) $(OBJS)

clean:
        rm -rf $(OBJS)

fclean: clean
        rm -rf $(NAME)

re: fclean all
