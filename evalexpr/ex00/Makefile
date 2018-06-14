# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sharris <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/03 18:25:41 by sharris           #+#    #+#              #
#    Updated: 2018/06/03 18:25:42 by sharris          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror -o

NAME = eval_expr

SRCS = $(wildcard ./srcs/*.c)

HEADER = $(wildcard ./includes/*.h)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(NAME) $(SRCS)

clean:

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all