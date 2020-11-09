# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlecomte <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/25 15:33:49 by jlecomte          #+#    #+#              #
#    Updated: 2020/08/25 16:26:58 by jlecomte         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAG = -Wall -Wextra -Werror

PATH_SRC = ./srcs/

HEADER = ./includes

SRC = $(PATH_SRC)ft_putchar.c $(PATH_SRC)ft_swap.c $(PATH_SRC)ft_putstr.c $(PATH_SRC)ft_strlen.c $(PATH_SRC)ft_strcmp.c

OBJ = ${SRC:.c=.o}


all: $(NAME)

.c.o:
	gcc -c $(FLAG) -I $(HEADER) $< -o $(<:.c=.o)

$(NAME) : ${OBJ}
	ar rc $(NAME) $(OBJ)

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
