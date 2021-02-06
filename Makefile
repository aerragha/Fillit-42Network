# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aerragha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/09 14:43:11 by aerragha          #+#    #+#              #
#    Updated: 2018/11/09 17:31:36 by aerragha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

CFLAGS = -Wall -Wextra -Werror -I libft/includes

SRC = src/main.c \
	  src/solve_tetris.c \
	  src/t_tetriminos.c \
	  src/tetris_check.c \
	  src/verifier.c \
	  src/veriftwo.c \

OBJ = src/main.o \
	  src/solve_tetris.o \
	  src/t_tetriminos.o \
	  src/tetris_check.o \
	  src/verifier.o \
	  src/veriftwo.o \

LIBFT = libft/libft.a

all : $(NAME)

$(OBJ): %.o: %.c
	@gcc -c $(CFLAGS) $< -o $@

$(LIBFT):
	@make -C libft

$(NAME): $(LIBFT) $(OBJ)
	@gcc $(OBJ) $(LIBFT) -o $(NAME)

clean:
	@rm -rf $(OBJ)
	@make -C libft clean

fclean: clean
	@rm -rf $(NAME)
	@make -C libft fclean

re: fclean all
