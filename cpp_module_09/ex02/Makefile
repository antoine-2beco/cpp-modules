# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/08 11:47:01 by ade-beco          #+#    #+#              #
#    Updated: 2025/08/14 19:45:24 by ade-beco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		PmergeMe

SRCS 		=		main.cpp PmergeMeCore.cpp PmergeMeVector.cpp PmergeMeDeque.cpp

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
