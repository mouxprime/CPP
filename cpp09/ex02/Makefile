# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mianni <mianni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/10 14:12:33 by mianni            #+#    #+#              #
#    Updated: 2025/05/10 14:13:38 by mianni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe

CC = c++
CFLAGS = -Wall -Wextra -Werror --std=c++98

SRCS = PmergeMe.cpp \
		main.cpp
		
OBJS = $(SRCS:.cpp=.o)
RM = rm -f

all: $(NAME)
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)

re: fclean all
.PHONY: all clean fclean re
