# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sharris <sharris@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/28 16:23:01 by sharris           #+#    #+#              #
#    Updated: 2018/05/28 17:03:14 by sharris          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -c -Wall -Wextra -Werror

SRC = $(wildcard  ./srcs/*.c)

OBJ = *.o

INCFLAG = -I

HEADER = $(wildcard ./includes/*.h)

all: $(NAME)

$(NAME):
	$(CC) $(GCC) $(CFLAGS) $(SRC) $(INCFLAG) $(HEADER)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
