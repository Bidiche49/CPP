NAME	=	Materia
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC_DIR	=	srcs
INC_DIR	=	includes

SRCS =  $(SRC_DIR)/main.cpp				\
		$(SRC_DIR)/AMateria.cpp			\
		$(SRC_DIR)/MateriaSource.cpp	\
		$(SRC_DIR)/Character.cpp		\
		$(SRC_DIR)/Cure.cpp				\
		$(SRC_DIR)/Ice.cpp

OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(SRC_DIR)/%.o)

HEADER =	$(INC_DIR)/AMateria.hpp			\
			$(INC_DIR)/MateriaSource.hpp	\
			$(INC_DIR)/IMateriaSource.hpp	\
			$(INC_DIR)/Character.hpp		\
			$(INC_DIR)/ICharacter.hpp		\
			$(INC_DIR)/Cure.hpp				\
			$(INC_DIR)/Ice.hpp

RESET	= \033[0m
GREEN	= \033[32m
YELLOW	= \033[33m

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(YELLOW)Compiling in progress...$(RESET)"
	@$(CC) $(CFLAGS) -o $@ $(OBJS)
	@echo "$(GREEN)------------------------$(RESET)"
	@echo "$(GREEN)$(NAME) is compile !$(RESET)"

$(SRC_DIR)/%.o: $(SRC_DIR)/%.cpp | $(SRC_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

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
