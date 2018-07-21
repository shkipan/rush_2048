# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/07 14:30:48 by dskrypny          #+#    #+#              #
#    Updated: 2018/07/21 19:35:36 by dskrypny         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = game_2048

SOURCE = main.c \
		 numbers.c \
		 move_up.c \
		 move_down.c \
		 move_left.c \
		 move_right.c 

FLAGS = -Wall -Wextra -Werror

LIB = libft/libft.a

all: $(NAME)

$(NAME):
	@make -C libft/
	@gcc $(FLAGS) $(SOURCE) -o $(NAME) $(LIB) -lncurses 
	@echo "2048 compiled"

clean:
	@rm -rf *.o
	@make clean -C libft/
	@echo "objects cleaned"

fclean: clean
	@rm -rf $(NAME)
	@make fclean -C libft/
	@echo "all cleaned"

re: fclean all
