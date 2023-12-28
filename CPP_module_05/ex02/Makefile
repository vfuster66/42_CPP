# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/21 09:01:46 by vfuster-          #+#    #+#              #
#    Updated: 2023/12/28 17:40:27 by vfuster-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = formNeeded

# Nom du compilateur
CC=g++

# Options de compilation
CFLAGS=-Wall -Wextra -Werror -std=c++98

# Source files
SRC=main.cpp Bureaucrat.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp \
	ShrubberyCreationForm.cpp

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