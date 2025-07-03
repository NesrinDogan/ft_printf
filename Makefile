NAME	= libftprintf.a

SRC = ft_printf.c ft_print_format.c \
	ft_putchar.c ft_putstr.c ft_putnbr.c \
	ft_putunsigned.c ft_puthex.c ft_putptr.c

OBJ	= $(SRC:.c=.o)

CFLAGS	= -Wall -Wextra -Werror 

CC	= cc 

AR	= ar rcs

RM	= rm -f

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

all:	$(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

