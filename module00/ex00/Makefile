NAME	= megaphone
CC		= c++
SRC		= $(wildcard ./*.cpp)
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

all:	$(NAME)

$(NAME):
		$(CC) $(FLAGS) $(SRC) -o $(NAME)
clean:
		$(RM) $(NAME)
fclean:
		$(RM) $(NAME)

re:		clean all

.PHONY:	all clean re fclean