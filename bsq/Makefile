# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbeguin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/18 02:15:30 by tbeguin           #+#    #+#              #
#    Updated: 2018/09/19 00:35:08 by tbeguin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
FLAGS = -Wall -Werror -Wextra

compileV02 :
	gcc -c read/read.c lib/tools.c lib/tools_2.c main.c \
		scan/scan.c
	gcc  read.o tools.o tools_2.o main.o scan.o -o $(NAME)
	make clean

compile :
	gcc $(FLAGS) -c read/read.c lib/tools.c lib/tools_2.c
	gcc $(FLAGS) read/read.o lib/tools.o lib/tools_2.o -o $(NAME)

clean :
	rm -f read.o tools.o tools_2.o main.o verif.o scan.o

fclean : clean
	rm -f $(NAME)

re : fclean compile
