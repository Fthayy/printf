NAME	= libftprintf
CC = gcc
INC = ft_printf.h
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_loc.c \
			ft_putnbr.c \
			ft_x.c \
			ft_bigx.c \
			ft_uns.c \
			ft_putchr.c \
			ft_loc.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME).a

$(NAME).a: $(OBJS)
	@ar -rcs $(NAME).a $(OBJS)

%.o: %.c $(INC)
	@$(CC) -c $< -o $@ $(CFLAGS)


clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME).a

re: fclean all

.PHONY: all, clean, fclean, re