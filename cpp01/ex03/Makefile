# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mianni <mianni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/13 17:34:03 by mianni            #+#    #+#              #
#    Updated: 2025/02/13 17:34:03 by mianni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Violence
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -g3 -std=c++98
SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJ = $(SRC:.cpp=.o)
RM = rm -f

# Colors
GREEN = \033[0;32m
YELLOW = \033[0;33m
NC = \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(YELLOW)Linking...$(NC)"
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)
	@echo "$(GREEN)Executable $(NAME) created.$(NC)"

%.o: %.cpp
	@echo "$(YELLOW)Compiling $<...$(NC)"
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo "$(YELLOW)Cleaning object files...$(NC)"
	$(RM) $(OBJ)

fclean: clean
	@echo "$(YELLOW)Removing executable...$(NC)"
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re