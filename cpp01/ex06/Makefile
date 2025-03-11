# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mianni <mianni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/19 11:49:42 by mianni            #+#    #+#              #
#    Updated: 2025/02/19 13:50:32 by mianni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl_filter
SRC = main.cpp harl.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++
CFLAGS = -Wall -Wextra -Werror -g3 -std=c++98
RM = rm -f

# Colors
GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo "$(GREEN)Compiled successfully!$(RESET)"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(GREEN)Compiled $<$(RESET)"

clean:
	@$(RM) $(OBJ)
	@echo "$(RED)Object files removed!$(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)Executable removed!$(RESET)"

re: fclean all

.PHONY: all clean fclean re