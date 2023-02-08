NAME		= Abstract
SRCS		= ${wildcard ./*.cpp}
OBJS 		= ${SRCS:.cpp=.o}
CC			= c++
RM			= rm -f
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

%.o: %.cpp
			@$(CC) ${CXXFLAGS} -c $< -o $@

$(NAME):	$(OBJS)
			@$(CC) $(OBJS) $(CXXFLAGS) -o $(NAME)

all:		${NAME}

clean:
			@${RM} ${OBJS}

fclean:		clean
			@${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re