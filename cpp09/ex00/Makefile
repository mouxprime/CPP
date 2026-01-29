# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mianni <mianni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/05 12:37:50 by mianni            #+#    #+#              #
#    Updated: 2025/05/09 14:38:21 by mianni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g
SRCS = BitcoinExchange.cpp \
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
