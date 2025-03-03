# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/22 18:22:10 by mmounsif          #+#    #+#              #
#    Updated: 2025/03/03 20:29:47 by mmounsif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
FT_PRINTF_FLAGS = -Lft_printf -lftprintf
LIBFT_FLAGS = -Llibft -lft

SRC = main.c \
	Doubly_linked_lists.c \

OBJ = $(SRC:.c=.o)

all: ft_printf libft $(NAME) 

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FT_PRINTF_FLAGS) $(LIBFT_FLAGS) -o $(NAME)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_printf: ft_printf/libftprintf.a
ft_printf/libftprintf.a:
	make -C ft_printf

libft: libft/libft.a
libft/libft.a:
	make -C libft
	
clean:
	rm -rf $(OBJ)
	make -C ft_printf clean
	make -C libft clean

fclean: clean
	rm -rf $(NAME)
	make -C ft_printf fclean
	make -C libft fclean

re: fclean all

.PHONY: all clean fclean re ft_printf libft