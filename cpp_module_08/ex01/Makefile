# **************************************************************************** 
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/05 16:04:39 by ade-beco          #+#    #+#              #
#    Updated: 2025/05/06 13:15:39 by ade-beco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		ex01_exec

SRCS 		=		main.cpp span.cpp

OBJECTS		=		$(SRCS:.cpp=.o)

CC			=		c++
CFLAGS		=		-Wall -Wextra -Werror -std=c++98

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
