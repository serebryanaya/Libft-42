SOURCE	= ft_display_file.c

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

NAME	= ft_display_file	

all:
			${CC} ${CFLAGS} -o ${NAME} ${SOURCE}

RM		= rm -f
			
clean:
			${RM} ft_display_file.o

fclean:		clean
			${RM} ${NAME}

.PHONY:		clean fclean
