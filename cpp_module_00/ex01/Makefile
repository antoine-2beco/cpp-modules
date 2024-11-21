# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/09 13:43:54 by ade-beco          #+#    #+#              #
#    Updated: 2024/11/21 10:48:55 by ade-beco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		phonebook

SRCS 		=		main.cpp PhoneBook.cpp Contact.cpp

OBJECTS		=		$(SRCS:.cpp=.o)

CPP			=		clang++
CPPFLAGS	=		-std=c++98 #-Wall -Wextra -Werror

all: 		$(NAME)

$(NAME):	$(OBJECTS)
					@echo "Compiling and Creating PhoneBook..."
					@$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJECTS)
					@echo "OK !"

clean:
					@echo "Cleaning PhoneBook Objects..."
					@rm -f $(OBJECTS)
					@echo "OK !"

fclean:			clean
					@echo "Cleaning PhoneBook..."
					@rm -f $(NAME)
					@echo "OK !"

re:			fclean all

.PHONY:		all clean fclean re
