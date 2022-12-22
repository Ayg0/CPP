NAME = harlFilter
SRC = main.cpp Harl.cpp
OBJ = ${SRC:.cpp=.o}
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g

all:	$(NAME)

$(NAME):	$(OBJ)
		c++ $(OBJ) -o $(NAME)
clean:
	rm -rf $(OBJ)
fclean:	clean
	rm -rf $(NAME)
re:	fclean all

.PHONY: clean fclean re all