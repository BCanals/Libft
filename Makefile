NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_putchar.c \
		ft_putstr.c \
		ft_strcmp.c \
		ft_strlen.c \
		ft_swap.c

OBJS = $(SRCS:.c=.o)

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $@ $(OBJS)
	ranlib $@ 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f libft.a

re: fclean all
