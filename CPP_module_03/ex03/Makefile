# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/21 09:01:46 by vfuster-          #+#    #+#              #
#    Updated: 2024/01/08 09:49:50 by vfuster-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = diamondTrap

# Nom du compilateur
CC=g++

# Options de compilation
CFLAGS=-Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow

# Source files
SRC=main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

# Object files
OBJ=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all