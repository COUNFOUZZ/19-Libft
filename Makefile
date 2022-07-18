# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabda <aabda@student.s19.be>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/17 15:21:55 by aabda             #+#    #+#              #
#    Updated: 2022/07/18 18:07:13 by aabda            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror

SRCS_P1 = ft_isalpha.c ft_isdigit.c \
	ft_isalnum.c ft_isascii.c \
	ft_isprint.c ft_strlen.c \
	ft_memset.c ft_bzero.c \
	ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c \
	ft_toupper.c ft_tolower.c \
	ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_memchr.c \
	ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c \
	ft_strdup.c \

SRCS_P2 = ft_substr.c ft_strjoin.c \
	ft_strtrim.c \
	ft_itoa.c ft_strmapi.c \
	ft_striteri.c ft_putchar_fd.c \
	ft_putstr_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c \

OBJS_P1 = $(SRCS_P1:.c=.o)
OBJS_P2 = $(SRCS_P2:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -o $@ -c $< $(FLAGS)

$(NAME): $(OBJS_P1) $(OBJS_P2)
	ar rcs $@ $^

norm:
	norminette

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
