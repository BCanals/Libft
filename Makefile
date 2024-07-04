# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bizcru <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/28 15:47:58 by bizcru            #+#    #+#              #
#    Updated: 2024/07/04 13:13:30 by bcanals-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRCS = $(wildcard *.c) 	

#ft_islower.c \
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
		ft_atoi.c \
		ft_strdup.c \
		ft_memcpy.c \
		ft_memrcpy.c \
		ft_memmove.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_memset.c \
		ft_bzero.c

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
