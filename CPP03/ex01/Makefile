NAME	=	ScavTrap
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp		\
		ClapTrap.cpp	\
		ScavTrap.cpp

OBJS = $(SRCS:.cpp=.o)

HEADER =	ClapTrap.hpp	\
			ScavTrap.hpp

RESET	= \033[0m
GREEN	= \033[32m
YELLOW	= \033[33m

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(YELLOW)Compiling in progress...$(RESET)"
	@$(CC) $(CFLAGS) -o $@ $(OBJS)
	@echo "$(GREEN)------------------------$(RESET)"
	@echo "$(GREEN)$(NAME) is compile !$(RESET)"


%.o: %.cpp $(HEADER)
	@$(CC) $(CFLAGS) -c $<

clean:
	@echo "$(YELLOW)Removing object files...$(RESET)"
	@rm -f $(OBJS)
	@echo "$(GREEN)Object files removed.$(RESET)"

fclean: clean
	@echo "$(YELLOW)Removing the executable...$(RESET)"
	@rm -f $(NAME)
	@echo "$(GREEN)Executable removed.$(RESET)"

re: fclean all

.PHONY: all clean fclean re
