NAME	=	identify
SRCS	=	main.cpp
HEADER  =   ./
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -Wconversion
OBJS	=	$(SRCS:.cpp=.o)

LFLAGS  =   -I $(HEADER)

%.o:		%.cpp $(HEADER)/A.hpp
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