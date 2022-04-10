##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## inf add
##

SRC	=	main.c	\
		functionnotuse.c	\
		functionuse.c	\
		push.c	\
		show.c	\
		tools.c	\

NAME	=	push_swap

all:	$(NAME)

OBJ = $(SRC:.c=.o)

$(NAME):	$(SRC)
	make -C ./lib/my/
	gcc -o $(NAME) $(SRC) -I./include -L./lib/my -lmy -g3

clean:

	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

tests_run:
	echo "Tests run"

re: fclean all
