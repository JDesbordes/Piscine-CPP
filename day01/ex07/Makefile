
HEADERS	= main.hpp

NAME	=	replace

SRCS	=	main.cpp

CC		=	clang++

CFLAGS	=	-Wall -Wextra -Werror

OBJS	=	$(SRCS:.cpp=.o)

%.o : %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS) $(HEADERS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: all fclean clean re
