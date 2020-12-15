NAME	=	identify
SRCS	=	main.cpp
<<<<<<< HEAD
HEADERS =	A.hpp B.hpp C.hpp Base.hpp
INC		=   ./
=======
HEADER  =   ./
>>>>>>> 69b380d0ee4ec1c536b124aaa5b7ab528d247861
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror
OBJS	=	$(SRCS:.cpp=.o)

<<<<<<< HEAD
LFLAGS  =   -I $(INC)

%.o:		%.cpp $(INC)/$(HEADERS)
=======
LFLAGS  =   -I $(HEADER)

%.o:		%.cpp $(HEADER)/A.hpp
>>>>>>> 69b380d0ee4ec1c536b124aaa5b7ab528d247861
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