NAME	=	serial
SRCS	=	main.cpp
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -Wconversion
LFLAGS  =   -I

all:		$(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: all fclean clean re