##
## EPITECH PROJECT, 2020
## MP_c_coaching
## File description:
## Makefile
##

NAME	=	ga_text_analyzer

SRCS	=	src/main.c							\
			src/check/how_many_num.c			\
			src/check/how_many_uppercase.c		\
			src/check/how_many_lowercase.c		\
			src/check/how_many_alpha.c 			\
			src/main/main_loop.c				\
			src/main/main_print.c 				\
			src/print/print_length.c 			\
			src/print/print_sentence.c 			\
			src/print/print_lower.c 			\
			src/print/print_num.c 				\
			src/print/print_upper.c

OBJS	=	$(SRCS:.c=.o)

CC		=	gcc

C_LIBRARY	= lib/my_c_library.a

CFLAGS  +=  -I include
CFLAGS	+=	-Wall -Wextra
CFLAGS	+=	-Wpedantic -Wno-long-long
CFLAGS	+=	-Werror

RM		=	rm -rf

all:	$(C_LIBRARY) $(NAME)

$(NAME):	$(OBJS)
		$(CC) $(OBJS) -o $(NAME) $(C_LIBRARY)

$(C_LIBRARY):
		make -C ./lib/my_c_library/

clean:
	$(RM) $(OBJS)
	make clean -C ./lib/my_c_library/

fclean:	clean
	$(RM) $(NAME)
	make fclean -C ./lib/my_c_library/

re:	fclean all