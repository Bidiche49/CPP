NAME = megaphone
SRC = megaphone.cpp
CC = c++
CFLAGS = -Wall -Wextra -Werror

RESET	= \033[0m
GREEN	= \033[32m
YELLOW	= \033[33m

all: $(NAME)

$(NAME): $(SRC)
	@echo "$(YELLOW)Compiling in progress...$(RESET)"
	@$(CC) $(CFLAGS) -o $(NAME) $(SRC)
	@echo "$(GREEN)Compilation completed.$(RESET)"

clean:
	@echo "$(YELLOW)Removing the executable...$(RESET)"
	@rm -f $(NAME)
	@echo "$(GREEN)Executable removed.$(RESET)"

re: clean all

.PHONY: all clean re
