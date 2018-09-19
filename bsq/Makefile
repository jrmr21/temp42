# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbeguin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/18 02:15:30 by tbeguin           #+#    #+#              #
#    Updated: 2018/09/19 19:30:36 by tbeguin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
FLAGS = -Wall \
	   	-Werror \
	   	-Wextra

SRC = lib/tools.c \
	  lib/tools_2.c \
	  read/read.c \
	  scan/scan.c \
	  verif/verif.c \
	  main.c

OBJET = tools.o \
		tools_2.o \
		read.o \
		scan.o \
		verif.o \
		main.o

all :
	gcc $(FLAGS) -c $(SRC) 
	gcc $(FLAGS) $(OBJET) -o $(NAME)

clean :
	rm -f $(OBJET)

fclean : clean
	rm -f $(NAME)

re : fclean all
