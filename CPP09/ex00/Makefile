NAME	=	btc
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

OBJ_DIR	=	objs

SRCS	=	srcs/main.cpp				\
			srcs/BitcoinExchange.cpp

OBJS	=	$(SRCS:%.cpp=$(OBJ_DIR)/%.o)

HEADER	=	includes/BitcoinExchange.hpp

RESET	=	\033[0m
GREEN	=	\033[32m
YELLOW	=	\033[33m

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(YELLOW)Compiling in progress...$(RESET)"
	@$(CC) $(CFLAGS) -o $@ $(OBJS)
	@echo "$(GREEN)------------------------$(RESET)"
	@echo "$(GREEN)$(NAME) is compiled!$(RESET)"

$(OBJ_DIR)/%.o: %.cpp $(HEADER) | $(OBJ_DIR)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -I ./includes -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@echo "$(YELLOW)Removing object files and directory...$(RESET)"
	@rm -rf $(OBJ_DIR)
	@echo "$(GREEN)Object files and directory removed.$(RESET)"

fclean: clean
	@echo "$(YELLOW)Removing the executable...$(RESET)"
	@rm -f $(NAME)
	@echo "$(GREEN)Executable removed.$(RESET)"

re: fclean all

.PHONY: all clean fclean re
