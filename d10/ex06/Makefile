# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sharris <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/28 22:10:57 by sharris           #+#    #+#              #
#    Updated: 2018/05/28 22:10:58 by sharris          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

CC = gcc

CFLAGS = -Wall -Wextra -Werror

OUTFLAG = -o

SRC = $(wildcard ./srcs/*.c)

LIB = -L. -lft

H_BIN = $(wildcard ./includes/*.gch)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) $(LIB) $(OUTFLAG) $(NAME)

clean:
	/bin/rm -f $(H_BIN)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all