NAME = fixed
SRC = main.cpp Fixed.cpp
OBJ = ${SRC:.cpp=.o}
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all:	$(NAME)

$(NAME):	$(OBJ)
		c++ $(OBJ) $(CPPFLAGS) -o $(NAME)
		
clean:
	rm -rf $(OBJ)
fclean:	clean
	rm -rf $(NAME)
re:	fclean all

.PHONY: clean fclean re all
