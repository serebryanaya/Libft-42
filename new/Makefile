NAME	= libft.a

SOURCE	= ft_*.c
OBJS	= ft_*.o 
CC	= cc
CFLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):
	${CC} $(FLAGS) -c $(SOURCE)
	ar rc $(NAME) $(OBJS)

RM	= rm -f
			
clean:
	${RM} $(OBJS)

fclean:		clean
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
