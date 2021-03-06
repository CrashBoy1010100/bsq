 SRCS	= main.c error.c matrix.c detect_first_line_file.c analyze_matrix.c paint_matrix.c print.c
 LIBS	= bsq.h libraries.h first_line_file.h point_master.h
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

norme:
			norminette ${SRCS}
			norminette *.h

.PHONY:		all clean fclean re norme
