# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/22 18:22:10 by mmounsif          #+#    #+#              #
#    Updated: 2025/03/07 13:19:51 by mmounsif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
FT_PRINTF_FLAGS = -Lft_printf -lftprintf

SRC = main.c \
	libft_functions/ft_atol.c \
	libft_functions/ft_calloc.c \
	libft_functions/ft_isdigit.c \
	libft_functions/ft_split.c \
	src/checks.c \
	src/list_manipulation.c \
	src/free.c \
	src/push.c \
	src/swap.c \
	src/rotate.c \
	src/reverse_rotate.c \
	src/sort.c \

OBJ = $(SRC:.c=.o)

all: ft_printf $(NAME) 

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FT_PRINTF_FLAGS) -o $(NAME)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_printf: ft_printf/libftprintf.a
ft_printf/libftprintf.a:
	make -C ft_printf

clean:
	rm -rf $(OBJ)
	make -C ft_printf clean

fclean: clean
	rm -rf $(NAME)
	make -C ft_printf fclean

re: fclean all

.PHONY: all clean fclean re ft_printf