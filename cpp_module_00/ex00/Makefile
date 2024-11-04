# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/09 13:43:54 by ade-beco          #+#    #+#              #
#    Updated: 2024/10/22 09:15:02 by ade-beco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MEGAPHONE	=		megaphone

SRCS 		=		megaphone.cpp

OBJECTS		=		$(SRCS:.cpp=.o)

CC			=		c++
CFLAGS		=		-Wall -Wextra -Werror -std=c++98

all: 		$(OBJECTS) $(MEGAPHONE)

%.o:		%.c
					@$(CC) $(CFLAGS) -c $(INC) $< -o $(<:c=o)

$(PHILO):	$(OBJECTS)
					@echo "Compiling and Creating Megaphone..."
					@$(CC) $(CFLAGS) -o $(MEGAPHONE) $(OBJECTS)
					@echo "OK !"

clean:
					@echo "Cleaning Megaphone Objects..."
					@rm -f $(OBJECTS)
					@echo "OK !"

fclean:			clean
					@echo "Cleaning Megaphone..."
					@rm -f $(MEGAPHONE)
					@echo "OK !"

re:			fclean all

.PHONY:		all clean fclean re
