# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/08 11:47:01 by ade-beco          #+#    #+#              #
#    Updated: 2025/07/30 14:44:04 by ade-beco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		PmergeMe

SRCS 		=		main.cpp  PmergeMe.cpp

OBJECTS		=		$(SRCS:.cpp=.o)

CC			=		c++
CFLAGS		=		-Wall -Wextra -Werror -std=c++98 -fsanitize=address

all: 		$(OBJECTS) $(NAME)

%.o:		%.cpp
					@$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJECTS)
					@echo "Compiling and Creating $(NAME)..."
					@$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS)
					@echo "OK !"

clean:
					@echo "Cleaning $(NAME) Objects..."
					@rm -f $(OBJECTS)
					@echo "OK !"

fclean:			clean
					@echo "Cleaning $(NAME)..."
					@rm -f $(NAME)
					@echo "OK !"

re:			fclean all

.PHONY:		all clean fclean re
