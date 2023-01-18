NAME		= Harl
SRCS		= ${wildcard ./*.cpp}
OBJS 		= ${SRCS:.cpp=.o}
CC			= c++
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror -std=c++98

%.o: %.cpp
			@$(CC) ${CFLAGS} -c $< -o $@

$(NAME):	$(OBJS)
			@$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

all:		${NAME}

clean:
			@${RM} ${OBJS}

fclean:		clean
			@${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re