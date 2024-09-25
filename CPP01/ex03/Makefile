NAME	=	Violence
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp	\
		Weapon.cpp	\
		HumanA.cpp	\
		HumanB.cpp

OBJS = $(SRCS:.cpp=.o)

RESET	= \033[0m
GREEN	= \033[32m
YELLOW	= \033[33m

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(YELLOW)Compiling in progress...$(RESET)"
	@$(CC) $(CFLAGS) -o $@ $(OBJS)
	@echo "$(GREEN)Compilation completed.$(RESET)"


%.o: %.cpp
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
