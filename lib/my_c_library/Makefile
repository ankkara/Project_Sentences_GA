##
## EPITECH PROJECT, 2020
## MP_c_coaching
## File description:
## Makefile
##

NAME	=	../my_c_library.a

SRCS	=	src/my_put_nbr.c 	\
			src/my_putchar.c 	\
			src/my_putstr.c 	\
			src/my_strlen.c		\
			src/my_strcmp.c

OBJS	=	$(SRCS:.c=.o)

CC 		=	gcc

LIBCOMP	=	ar -rcs

IDIR	=	../../include/

CFLAGS  +=  -I $(IDIR)
CFLAGS	+=	-Wall -Wextra
CFLAGS	+=	-Wpedantic -Wno-long-long
CFLAGS	+=	-Werror

RM		=	rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
		$(LIBCOMP) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all