NAME = fragtrap
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJ = ${SRC:.cpp=.o}
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all:	$(NAME)

$(NAME):	$(OBJ)
		c++ $(OBJ) $(CPPFLAGS) -o $(NAME)
		make clean
clean:
	rm -rf $(OBJ)
fclean:	clean
	rm -rf $(NAME)
re:	fclean all

.PHONY: clean fclean re all