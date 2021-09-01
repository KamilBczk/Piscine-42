
SRCS 		= test.c map.c shapes.c utils.c valid_map.c ft_make_map.c algo.c

OBJS		= ${SRCS:.c=.o}

NAME		= bsq

RM		= rm -f

GCCFLAGS	= -Wall -Werror -Wextra

${NAME}:	${OBJS}
			gcc ${GCGFLAGS} -o ${NAME} ${OBJS}
clean:
			 ${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:		fclean
		make