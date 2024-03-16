##
## EPITECH PROJECT, 2023
## B-PSU-100-LYN-1-1-sokoban-alexis.drago-beltran
## File description:
## Makefile
##

SRC	=	secured.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libhashtable.a

T_NAME = secured

CFLAGS	+=	-Wall -g3

all:	build	clean

build:	$(OBJ)
	make -C lib/my

test:
	make -C lib/my
	gcc main.c -L lib/my/ -I include -lhashtable

bootstrap:
	make -C lib/my
	gcc -c bssecured.c -o bssecured -L lib/my -I include -lmy

clean:
	rm -f vgcore.* $(OBJ) *.gch
	rm -f *.o
	make clean -C lib/my

fclean:	clean
	rm -f $(NAME)
	rm -f $(T_NAME)

re:	fclean	all

gertrude:
	@echo -e "\n\n\033[3mGertrude-CLI - Makefile creation tool\033[0m\n"

.PHONY:	all	build	clean	fclean	re
