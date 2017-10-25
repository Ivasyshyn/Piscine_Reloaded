#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sivasysh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/25 17:02:44 by sivasysh          #+#    #+#              #
#    Updated: 2017/10/25 17:02:45 by sivasysh         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRCC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
SRCO = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

INC = includes/*.h

all: $(NAME)

$(NAME):
	gcc -c $(SRCC) -I $(INC)
	ar rc $(NAME) $(SRCO)

clean:
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)

re: fclean all
