NAME = Character
SRC = MateriaSource.cpp main.cpp Ice.cpp Cure.cpp Character.cpp AMateria.cpp
OBJ = $(SRC:.cpp=.o)
CXX = c++
CXXFLAGS = -g -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
