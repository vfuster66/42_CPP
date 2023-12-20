# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/07 07:53:18 by vfuster-          #+#    #+#              #
#    Updated: 2023/12/20 11:43:55 by vfuster-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

# Nom du compilateur
CC=g++

# Options de compilation
CFLAGS=-Wall -Wextra -Werror -std=c++98

# Source files
SRC=Contact.cpp PhoneBook.cpp main.cpp

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
