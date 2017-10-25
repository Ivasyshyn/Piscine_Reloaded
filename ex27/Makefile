#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sivasysh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/25 17:38:10 by sivasysh          #+#    #+#              #
#    Updated: 2017/10/25 19:53:34 by sivasysh         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_display_file

SRC = display_file.c ft_putstr.c

all: $(NAME)

$(NAME):
	@gcc -Wextra -Wall -Werror -o $(NAME) $(SRC)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all