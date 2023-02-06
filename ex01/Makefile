NAME	= scavtraps
SRCS	= main.cpp ClapTrap.cpp ScavTrap.cpp
OBJS	= $(SRCS:.cpp=.o)
CC		= c++
CFLAGS	= -std=c++98 -Wall -Wextra -Werror
RM		= rm -f

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
