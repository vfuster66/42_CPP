# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/21 09:01:36 by vfuster-          #+#    #+#              #
#    Updated: 2023/12/21 16:45:42 by vfuster-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

# Nom du compilateur
CC=g++

# Options de compilation
CFLAGS=-Wall -Wextra -Werror -std=c++98

# Source files
SRC=main.cpp Harl.cpp

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