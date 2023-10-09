# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agheredi <agheredi@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/06 14:39:27 by agheredi          #+#    #+#              #
#    Updated: 2023/10/06 14:51:13 by agheredi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
FLAGS = -Wall -Werror -Wextra - g #-fsanitize='address,undefined'
SRC = push_swap.c \

CC = gcc
LIBFT_PATH = libft/
LIBFT_LIB = $(LIBFT_PATH)libft.a
OBJECTS = $(SRC:.c=.o)
HEADER = push_swap.h

all: subsystems $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c - o $@ $<

subsystems:
	make -C $(LIBFT_PATH) all

$(NAME): $(OBJECTS)
	$(CC) $(FLAGS) $(OBJECTS) $(LIBFT_LIB) -o $(NAME)

clean:
	make -C $(LIBFT_PATH) clean
	rm -f *.o

fclean:
	make -C $(LIBFT_PATH) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean subsystems
