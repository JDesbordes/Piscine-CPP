NAME	=	convert
SRCS	=	main.cpp Scalarc.cpp
HEADERS =	Scalarc.hpp
INC		=   ./
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror
OBJS	=	$(SRCS:.cpp=.o)

LFLAGS  =   -I $(INC)

%.o:		%.cpp $(INC)/$(HEADERS)
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