# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bizcru <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/28 15:47:58 by bizcru            #+#    #+#              #
#    Updated: 2024/10/18 15:33:41 by bizcru           ###   ########.fr        #
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
		ft_strdup.c \
		ft_memcpy.c \
		ft_memrcpy.c \
		ft_memrcpy.c \
		ft_memmove.c \
		ft_memcmp.c \
		ft_memset.c \
		ft_memchr.c \
		ft_putnbr_base.c \
		ft_putnbr_base_u.c \
		ft_print_memory.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_itoa.c \
		ft_itoa_u.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_split.c \
		ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstadd_back.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_printf.c \
		ft_printf_utils.c

OBJS = $(SRCS:.c=.o)

%.o: %.c
	gcc $(CFLAGS) -I. -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) libft.h Makefile
	ar rc $@ $(OBJS)
	ranlib $@ 

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f libft.a

re: fclean all
