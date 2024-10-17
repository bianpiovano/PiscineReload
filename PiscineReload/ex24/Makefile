CC = gcc

CFLAGS = -Wall -Wextra -Werror -I includes

SRCS_DIR = srcs
INCS_DIR = includes

SRCS = $(wildcard $(SRCS_DIR)/*.c)

OBJS = $(SRCS:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $@ $^
clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
