# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sharris <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/31 18:12:30 by sharris           #+#    #+#              #
#    Updated: 2018/05/31 18:12:31 by sharris          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

CC = gcc

CFLAGS = -Wall -Wextra -Werror

OUTFLAG = -o

SRC = $(wildcard ./srcs/*.c)

H_BIN = $(wildcard ./includes/*.gch)

LIB = -L. -lft

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) $(LIB) $(OUTFLAG) $(NAME)

clean:

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all