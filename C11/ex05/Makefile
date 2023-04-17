SRCS	=	cfiles/do_op.c cfiles/ft_add.c cfiles/ft_atoi.c cfiles/ft_div.c cfiles/ft_mod.c cfiles/ft_mult.c cfiles/ft_putnbr.c cfiles/ft_sub.c
OBJS	=	${SRCS:c=o}
NAME	=	do-op
CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra
RM		=	 rm -f

all:
	${CC} ${CFLAGS} ${SRCS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all
