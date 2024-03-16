##
## EPITECH PROJECT, 2023
## B-CPE-LYN-1-1-cpoolday10-mathis.quenardel
## File description:
## No file there , just an epitech header example .
## You can even have multiple lines if you want !
##

SRC =	$(wildcard *.c)	\
		../../src/create_entry.c	\
		../../src/m_h.c	\
		../../secured.c	\
		../../secured_two.c	\

OBJ = $(SRC:.c=.o)

NAME = libhashtable.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc ${NAME} ${OBJ}
	# mv $(NAME) ../../

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
