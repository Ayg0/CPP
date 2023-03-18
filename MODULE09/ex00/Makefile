NAME = btc
CC = c++ -g
CPPFLAGS = -std=c++98
#-Wall -Werror -Wextra
SRC = main.cpp BitcoinExchange.cpp
RM = rm -rf
OBJ = ${SRC:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re:	fclean all

.Phony: all clean fclean re