# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bizcru <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/28 15:47:58 by bizcru            #+#    #+#              #
#    Updated: 2024/07/08 04:16:02 by bizcru           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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
		ft_strcmp.c \
		ft_striteri.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strndup.c \
		ft_strnstr.c \
		ft_strjoin.c \
		ft_strmapi.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_strtrimu.c \
		ft_atoi.c \
		ft_strdup.c \
		ft_memcpy.c \
		ft_memrcpy.c \
		ft_memrcpy.c \
		ft_memmove.c \
		ft_memcmp.c \
		ft_memset.c \
		ft_memchr.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_itoa.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_split.c

BONUS_SRCS = ft_lstnew.c \
			 ft_lstadd_front.c \
			 ft_lstadd_back.c \
			 ft_lstsize.c \
			 ft_lstlast.c \
			 ft_lstdelone.c \
			 ft_lstclear.c \
			 ft_lstiter.c \
			 ft_lstmap.c

OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

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

bonus: $(NAME) $(BONUS_OBJS)
	ar rcs $(NAME) $(BONUS_OBJS)

clean: tclean
	rm -f $(OBJS)

fclean: clean
	rm -f libft.a

tclean:
	rm -f $(TESTO)
	rm -f $(TESTNAME)

retest: tclean test

re: fclean all
