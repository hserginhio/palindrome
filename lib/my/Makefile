##
## EPITECH PROJECT, 2023
## makefile
## File description:
## makefile
##

SRC =	hexa.c \
	hexa_cap.c \
	my_putchar.c \
	my_put_nbr.c \
	my_putstr.c \
	octal.c \
	printf.c \
	decimal.c \
	float.c \
	expo.c \
	expo_cap.c \
	flag_1.c \
	flag_2.c \
	flag_3.c \
	percent.c \
	my_strcmp.c \
	my_strdup.c \
	count.c \
	my_charisnum.c \
	my_strcat.c \
	my_strcpy.c \
	my_str_to_word_array.c \

CFLAGS = -g3

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	libmy.a

libmy.a:	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f ../$(NAME)

re:	fclean all
