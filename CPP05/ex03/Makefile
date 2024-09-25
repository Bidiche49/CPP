NAME	=	Form
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

OBJ_DIR		=	objs
SRCS_DIR	=	srcs/
INCLUDES_DIR=	includes/

SRCS	=	$(SRCS_DIR)main.cpp						\
			$(SRCS_DIR)Bureaucrat.cpp				\
			$(SRCS_DIR)AForm.cpp					\
			$(SRCS_DIR)Intern.cpp					\
			$(SRCS_DIR)ShrubberyCreationForm.cpp	\
			$(SRCS_DIR)RobotomyRequestForm.cpp		\
			$(SRCS_DIR)PresidentialPardonForm.cpp

OBJS	=	$(SRCS:%.cpp=$(OBJ_DIR)/%.o)

HEADER	=	$(INC_DIR)Bureaucrat.hpp				\
			$(INC_DIR)AForm.hpp						\
			$(INC_DIR)Intern.hpp					\
			$(INC_DIR)ShrubberyCreationForm.hpp		\
			$(INC_DIR)RobotomyRequestForm.hpp		\
			$(INC_DIR)PresidentialPardonForm.hpp

RESET	=	\033[0m
GREEN	=	\033[32m
YELLOW	=	\033[33m

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(YELLOW)Compiling in progress...$(RESET)"
	@$(CC) $(CFLAGS) -o $@ $(OBJS)
	@echo "$(GREEN)------------------------$(RESET)"
	@echo "$(GREEN)$(NAME) is compiled!$(RESET)"

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@echo "$(YELLOW)Removing object files and directory...$(RESET)"
	@rm -rf $(OBJ_DIR)
	@rm -rf *_shrubbery
	@echo "$(GREEN)Object files and directory removed.$(RESET)"

fclean: clean
	@echo "$(YELLOW)Removing the executable...$(RESET)"
	@rm -f $(NAME)
	@echo "$(GREEN)Executable removed.$(RESET)"

re: fclean all

.PHONY: all clean fclean re
