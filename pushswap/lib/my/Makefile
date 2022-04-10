##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile
##

SRC =	my_putchar.c	\
	my_putnbr.c 	\
	my_putstr.c 	\
	my_strcat.c	\
	my_strcpy.c	\
	my_strlen.c	\
	my_printf.c	\
	second.c	\
	third.c	\
	fourth.c	\
	my_getnbr.c

OBJ = $(SRC:.c=.o)

NAME = libmy.a

CC = gcc -o

CFLAGS = -g -g3 -I  ./lib/my -lmy -g3

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc libmy.a $(OBJ)

clean:
	rm -f $(NAME)
fclean: fclean
	rm -f $(OBJ)
	rm -f $(NAME)
re: fclean $(NAME)
