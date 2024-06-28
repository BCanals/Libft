NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_islower.c \
		ft_isupper.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_atoi.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strncmp.c \
		ft_atoi.c
	

OBJS = $(SRCS:.c=.o)

TEST = test.c

TESTNAME = test

TESTO = $(TEST:.c=.o)

test: $(TESTO) $(NAME)
	gcc $(CFLAGS) -c $(TEST)
	gcc $(TESTO) -L. -lft -lbsd -o $(TESTNAME)

%.o: %.c
	gcc $(CFLAGS) -I. -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $@ $(OBJS)
	ranlib $@ 

clean: tclean
	rm -f $(OBJS)

fclean: clean
	rm -f libft.a

tclean:
	rm -f $(TESTO)
	rm -f $(TESTNAME)

retest: tclean test

re: fclean all
