
NAME	= libftprintf.a
CC		= cc
CFLAGS	= -Wall -Werror -Wextra
SRCS	= ft_printf.c ft_printchar.c ft_printn.c 
INC		= libftprintf.h
OBJ		= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

%.o: %.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
