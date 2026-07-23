# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csilva-s <csilva-s@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/23 02:30:46 by csilva-s          #+#    #+#              #
#    Updated: 2026/07/23 02:57:42 by csilva-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

SRC = main.cpp \
	Zombie.cpp \
	newZombie.cpp \
	zombieHorde.cpp \
	randomChump.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp Zombie.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -rf $(OBJ)
fclean: clean
	rm $(NAME)
re: fclean all

.PHONY: all clean fclean re
	
