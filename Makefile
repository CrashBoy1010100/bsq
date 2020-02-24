 SRCS	= main.c error.c ft_matrix.c
 LIBS	= bsq.h
 OBJS	= ${SRCS:.c=.o}
 NAME	= bsq
 CC		= cc
 RM		= rm -f
 CFLAGS	= -Wall -Wextra -Werror
 DEBUG	= lldb
 .c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS} ${LIBS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		debug
debug:
			${DEBUG} ${NAME} 

.PHONY:		s
s:
			./${NAME}}

.PHONY:		 norme
norme:
			norminette ${SRCS}
			norminette *.h
