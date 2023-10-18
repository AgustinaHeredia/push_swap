# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agusheredia <agusheredia@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/06 14:39:27 by agheredi          #+#    #+#              #
#    Updated: 2023/10/16 18:35:00 by agusheredia      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
FLAGS = -Wall -Werror -Wextra -g #-fsanitize='address,undefined'
SRC = push_swap.c \
	ft_atol.c \
	inicialice.c \
	utils_list.c \
	exit.c \

CC = gcc
LIBFT_PATH = libft/
LIBFT_LIB = $(LIBFT_PATH)libft.a
OBJECTS = $(SRC:.c=.o)
HEADER = push_swap.h

all: subsystems $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c -o $@ $<

subsystems:
	@ make -C $(LIBFT_PATH) all

$(NAME): $(OBJECTS)
	$(CC) $(FLAGS) $(OBJECTS) $(LIBFT_LIB) -o $(NAME)

clean:
	@ make -C $(LIBFT_PATH) clean
	rm -f *.o

fclean: clean
	@ make -C $(LIBFT_PATH) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean subsystems
