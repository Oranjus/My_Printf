##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Create a simple Makefile
##

SRC	=	sources/my_strlen.c\
		sources/my_put_nbr.c\
		sources/my_put_nbr_printf.c\
		sources/my_putchar.c\
		sources/my_putchar_printf.c\
		sources/my_printf.c\
		sources/my_putstr.c\
		sources/my_putstr_printf.c\
		sources/my_put_hexa_maj.c\
		sources/my_put_hexa.c\
		sources/my_put_octo.c\
		sources/switch_vars.c

OBJ	=	$(SRC:.c=.o) $(NO_CRITERION:.c=.o)


CPPFLAGS	+=	-I./include/

NAME	= libmy.a

all: $(NAME)

$(NAME):	$(OBJ)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)
	@rm -f *.o
	@rm -f *~
	@rm -f *.gcda
	@rm -f *.gcno
	@rm -f *.out

fclean: clean
	@rm -f $(NAME)
	@rm -rf criterions_r/


re:	fclean all

test_run:
	@gcc -o uni_t $(SRC) tests/*.c  $(CPPFLAGS) --coverage -lcriterion
	-./uni_t
	@rm uni_t

.PHONY: clean fclean all re test_run
