NAME	= libftprintf.a

SRCS = ft_loc.c \
			ft_putnbr.c \
			ft_x.c \
			ft_bigx.c \
			ft_uns.c \
			ft_putchr.c \
			ft_loc.c \
			ft_putstr.c \
			ft_printf.c

OBJS		= $(SRCS:%.c=%.o)

FLAGS		= -Wall -Wextra -Werror

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I./
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re