# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mianni <mianni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/29 13:46:25 by mianni            #+#    #+#              #
#    Updated: 2025/01/29 13:46:48 by mianni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = PhoneBook.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = PhoneBook

GREEN = \033[0;32m
RESET = \033[0m

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJ)
	@echo "$(GREEN)$(EXEC) compiled successfully!$(RESET)"

%.o: %.cpp phonebook.hpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXEC)

re: fclean all

.PHONY: all clean fclean re
