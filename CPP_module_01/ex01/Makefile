# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/21 08:29:09 by vfuster-          #+#    #+#              #
#    Updated: 2023/12/21 15:05:48 by vfuster-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombieHorde

# Nom du compilateur
CC=g++

# Options de compilation
CFLAGS=-Wall -Wextra -Werror -std=c++98

# Source files
SRC=main.cpp Zombie.cpp zombieHorde.cpp

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