# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/22 18:22:10 by mmounsif          #+#    #+#              #
#    Updated: 2025/02/23 13:36:06 by mmounsif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
FT_PRINTF_FLAGS = -Lft_printf -lftprintf

SRC = main.c \

OBJ = $(SRC:.c=.o)

all: printf $(NAME) 

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FT_PRINTF_FLAGS) -o $(NAME)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

printf:
	@make -C ft_printf

clean:
	rm -rf $(OBJ)
	make -C ft_printf clean

fclean: clean
	rm -rf $(NAME)
	make -C ft_printf fclean

re: fclean all

.PHONY: all clean fclean re printf