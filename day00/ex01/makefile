# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jacens <jacens@student.le-101.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/20 14:37:19 by jacens            #+#    #+#              #
#    Updated: 2020/02/20 16:06:35 by jacens           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME	=	my_awsome_phonebook
SRCS	=	srcs/my_awsome_phonebook.cpp
HEADER  =   includes
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror
OBJS	=	$(SRCS:.cpp=.o)

LFLAGS  =   -I $(HEADER)

%.o:		%.cpp $(HEADER)/map.h
	$(CC) $(CFLAGS) $(LFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: all fclean clean re