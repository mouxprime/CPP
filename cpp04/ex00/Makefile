# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mianni <mianni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/14 14:19:08 by mianni            #+#    #+#              #
#    Updated: 2025/03/14 14:20:06 by mianni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zoo
SRC = WrongAnimal.cpp main.cpp WrongCat.cpp Animal.cpp Dog.cpp Cat.cpp 

# Répertoire des objets
OBJ_DIR = obj
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

# Compilateur et flags
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Règle principale
all: $(NAME)

# Compilation de l'exécutable
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

# Compilation des fichiers objets dans le bon répertoire
$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Nettoyage des fichiers objets
clean:
	rm -rf $(OBJ_DIR)

# Nettoyage total
fclean: clean
	rm -f $(NAME)

# Rebuild
re: fclean all

.PHONY: all clean fclean re
