#!/bin/sh
gcc -c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c ft_putchar.c
ar rc libft.a ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o ft_putchar.o
ranlib libft.a
