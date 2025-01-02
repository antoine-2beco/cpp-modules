# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/09 13:43:54 by ade-beco          #+#    #+#              #
#    Updated: 2025/01/02 18:27:18 by ade-beco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		account

SRCS 		=		tests.cpp Account.cpp

OBJECTS		=		$(SRCS:.cpp=.o)

CPP			=		clang++
CPPFLAGS	=		-std=c++98 -fsanitize=address #-Wall -Wextra -Werror

all: 		$(NAME)

$(NAME):	$(OBJECTS)
					@echo "Compiling and Creating Account..."
					@$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJECTS)
					@echo "OK !"

clean:
					@echo "Cleaning PhoneBook Account..."
					@rm -f $(OBJECTS)
					@echo "OK !"

fclean:			clean
					@echo "Cleaning Account..."
					@rm -f $(NAME)
					@echo "OK !"

re:			fclean all

.PHONY:		all clean fclean re
