# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/09 13:43:54 by ade-beco          #+#    #+#              #
#    Updated: 2024/11/20 17:45:22 by ade-beco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		megaphone

SRCS 		=		megaphone.cpp

OBJECTS		=		$(SRCS:.cpp=.o)

CC			=		c++
CFLAGS		=		-Wall -Wextra -Werror -std=c++98

all: 		$(OBJECTS) $(NAME)

%.o:		%.c
					@$(CC) $(CFLAGS) -c $(INC) $< -o $(<:c=o)

$(NAME):	$(OBJECTS)
					@echo "Compiling and Creating Megaphone..."
					@$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS)
					@echo "OK !"

clean:
					@echo "Cleaning Megaphone Objects..."
					@rm -f $(OBJECTS)
					@echo "OK !"

fclean:			clean
					@echo "Cleaning Megaphone..."
					@rm -f $(NAME)
					@echo "OK !"

re:			fclean all

.PHONY:		all clean fclean re
