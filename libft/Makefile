# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmeqdar <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/10 10:48:36 by mmeqdar           #+#    #+#              #
#    Updated: 2021/02/06 12:05:26 by aerragha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
SRC= ft_atoi.c ft_memmove.c ft_strcpy.c ft_strnequ.c ft_bzero.c	\
	ft_memset.c ft_strdel.c ft_strnew.c ft_isalnum.c ft_putchar.c	\
	ft_strdup.c	ft_strnstr.c ft_isalpha.c ft_putchar_fd.c ft_strequ.c \
	ft_strrchr.c ft_isascii.c ft_putendl.c ft_striter.c	ft_strsplit.c \
	ft_isdigit.c ft_putendl_fd.c ft_striteri.c ft_strstr.c ft_isprint.c	\
	ft_putnbr.c	ft_strjoin.c ft_strsub.c ft_itoa.c ft_putnbr_fd.c \
	ft_strlcat.c ft_strtrim.c ft_memalloc.c	ft_putstr.c	ft_strlen.c	\
	ft_tolower.c ft_memccpy.c ft_putstr_fd.c ft_strmap.c ft_toupper.c \
	ft_memchr.c	ft_strcat.c	ft_strmapi.c ft_memcmp.c ft_strchr.c \
	ft_strncat.c ft_memcpy.c ft_strclr.c ft_strncmp.c ft_memdel.c\
	ft_strcmp.c	ft_strncpy.c ft_lstadd.c ft_lstdel.c ft_lstdelone.c\
	ft_lstiter.c ft_lstmap.c ft_lstnew.c
OUT= ft_atoi.o  ft_memmove.o ft_strcpy.o ft_strnequ.o ft_bzero.o \
	ft_memset.o ft_strdel.o ft_strnew.o ft_isalnum.o ft_putchar.o \
	ft_strdup.o ft_strnstr.o ft_isalpha.o ft_putchar_fd.o ft_strequ.o \
	ft_strrchr.o ft_isascii.o ft_putendl.o ft_striter.o ft_strsplit.o \
	ft_isdigit.o ft_putendl_fd.o ft_striteri.o ft_strstr.o ft_isprint.o \
	ft_putnbr.o ft_strjoin.o ft_strsub.o ft_itoa.o ft_putnbr_fd.o \
	ft_strlcat.o ft_strtrim.o ft_memalloc.o ft_putstr.o ft_strlen.o \
	ft_tolower.o ft_memccpy.o ft_putstr_fd.o ft_strmap.o ft_toupper.o \
	ft_memchr.o ft_strcat.o ft_strmapi.o ft_memcmp.o ft_strchr.o \
	ft_memcpy.o ft_strclr.o ft_strncmp.o ft_memdel.o ft_strcmp.o \
	ft_strncpy.o ft_strncat.o ft_lstadd.o ft_lstdel.o ft_lstdelone.o\
	ft_lstiter.o ft_lstmap.o ft_lstnew.o
all : $(NAME)
$(NAME) :
	gcc -Wall -Werror -Wextra -c $(SRC)
	ar rc $(NAME) $(OUT)
clean :
	/bin/rm -f $(OUT)
fclean : clean
	/bin/rm -f $(NAME)
re : fclean all
