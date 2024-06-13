##
## EPITECH PROJECT, 2023
## ..
## File description:
## ..
##

SRC     =       src/begin.c \
				src/main.c \
				src/palindrome.c \
				src/base.c

OBJ     =       $(SRC:.c=.o)

NAME 	= 	palindrome

CFLAGS = -g3

FLAG	= -W -Wall -Wextra -Werror

all :	$(NAME)

$(NAME) : $(OBJ)
	make -C lib/my
	gcc -g3 $(OBJ) -o $(NAME) -L lib/ -lmy $(FLAG)

clean:
	make -C lib/my clean
	rm $(OBJ)

fclean :	clean
	make -C lib/my fclean
	rm -rf $(NAME)

re : fclean all
