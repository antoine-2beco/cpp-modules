# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/31 16:19:32 by ade-beco          #+#    #+#              #
#    Updated: 2025/02/03 10:49:24 by ade-beco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		ex02_exec

SRCS 		=		main.cpp Fixed.cpp

OBJECTS		=		$(SRCS:.cpp=.o)

CC			=		c++
CFLAGS		=		-Wall -Wextra -Werror -std=c++98

all: 		$(OBJECTS) $(NAME)

%.o:		%.c
					@$(CC) $(CFLAGS) -c $(INC) $< -o $(<:c=o)

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
