##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make
##

SRC	=	src/my_getnbr.c		\
		src/my_putchar.c	\
		src/my_putstr.c		\
		src/my_strlen.c		\
		src/my_convert_to_base_8.c	\
		src/my_revstr.c	\
		src/utils.c	\
		src/my_printf.c	\
		src/utils_two.c	\
		src/utils_three.c	\
		src/my_convert_to_base_16_x.c	\
		src/my_convert_to_base_16.c	\
		src/convert_bin.c	\
		src/my_convert_to_base_8_for_s.c	\
		src/my_convert_to_base_16_x_to_pointer.c	\
		src/my_put_float.c	\
		src/flags_S.c	\
		src/unsigned_my_putnbr.c	\
		src/my_putnbr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f ../$(NAME)

re:	fclean	all