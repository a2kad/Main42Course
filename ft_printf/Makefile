# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 19:32:12 by rureshet          #+#    #+#              #
#    Updated: 2024/11/03 13:47:49 by rureshet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SOURSES = ./sourses/ft_printf.c \
			./sourses/ft_show_str.c \
			./sourses/ft_show_num.c

OBJECTS = $(SOURSES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
INC = -I includes/

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) rsc $@ $(OBJECTS)

./sourses/%.o: ./sourses/%.c
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

