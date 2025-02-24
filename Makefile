# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/08 14:54:44 by joaomart          #+#    #+#              #
#    Updated: 2025/02/24 11:20:13 by joaomart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
FLAGS = -Wall -Wextra -Werror

# Libft e ft_printf #
LIBFT_DIR = libs/libft
FT_PRINTF_DIR = libs/ft_printf
LIBFT = $(LIBFT_DIR)/libft.a
FT_PRINTF = $(FT_PRINTF_DIR)/libftprintf.a

# push_swap #
PUSH_SWAP_SRCS = srcs/push_swap.c srcs/stack.c srcs/node.c srcs/algorithm.c \
				srcs/operations_p.c srcs/operations_r.c srcs/operations_s.c \
				srcs/operations_rr.c srcs/index.c srcs/sorts.c srcs/finds.c \
				srcs/cases1.c srcs/cases2.c srcs/cases_apply.c srcs/frees.c \
				srcs/validations1.c srcs/validations2.c srcs/utils.c \
				srcs/rotate_type.c
PUSH_SWAP_OBJS = $(PUSH_SWAP_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(PUSH_SWAP_OBJS) $(LIBFT) $(FT_PRINTF)
	@echo "$(BOLD_BLUE)╔══════════════════════════════════════╗"
	@echo "$(BOLD_BLUE)║       🔨 Building $(NAME)...       ║$(RESET)"
	@echo "$(BOLD_BLUE)╚══════════════════════════════════════╝"
	@$(CC) $(FLAGS) $(PUSH_SWAP_OBJS) $(LIBFT) $(FT_PRINTF) -o $(NAME)
	@echo "$(BOLD_GREEN)✅ $(NAME) built successfully!$(RESET)"

%.o: %.c
	@echo "$(YELLOW)🛠️  Compiling $<...$(RESET)"
	@$(CC) $(FLAGS) -c $< -o $@

$(LIBFT):
	@echo "$(BOLD_BLUE)╔══════════════════════════════════════╗"
	@echo "$(BOLD_BLUE)║        📚 Compiling libft...         ║$(RESET)"
	@echo "$(BOLD_BLUE)╚══════════════════════════════════════╝"
	@$(MAKE) -C $(LIBFT_DIR) --no-print-directory
	@echo "$(BOLD_GREEN)✅ libft.a built successfully!$(RESET)"

$(FT_PRINTF):
	@echo "$(BOLD_BLUE)╔══════════════════════════════════════╗"
	@echo "$(BOLD_BLUE)║      🖨️  Compiling ft_printf...       ║$(RESET)"
	@echo "$(BOLD_BLUE)╚══════════════════════════════════════╝"
	@$(MAKE) -C $(FT_PRINTF_DIR) --no-print-directory
	@echo "$(BOLD_GREEN)✅ libftprintf.a built successfully!$(RESET)"

clean:
	@echo "$(BOLD_BLUE)╔══════════════════════════════════════╗"
	@echo "$(BOLD_BLUE)║     🧹 Cleaning object files...      ║$(RESET)"
	@echo "$(BOLD_BLUE)╚══════════════════════════════════════╝"
	@rm -f $(PUSH_SWAP_OBJS)
	@$(MAKE) -C $(LIBFT_DIR) clean --no-print-directory
	@$(MAKE) -C $(FT_PRINTF_DIR) clean --no-print-directory
	@echo "$(BOLD_GREEN)✅ Object files cleaned.$(RESET)"

fclean: clean
	@echo "$(BOLD_BLUE)╔══════════════════════════════════════╗"
	@echo "$(BOLD_BLUE)║      🗑️  Removing $(NAME)...        ║$(RESET)"
	@echo "$(BOLD_BLUE)╚══════════════════════════════════════╝"
	@rm -f $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean --no-print-directory
	@$(MAKE) -C $(FT_PRINTF_DIR) fclean --no-print-directory
	@echo "$(BOLD_GREEN)✅ Full clean completed.$(RESET)"

re: fclean all

.PHONY: all clean fclean re

# Cores #
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
BOLD_GREEN = \033[1;32m
BOLD_YELLOW = \033[1;33m
BOLD_BLUE = \033[1;34m
RESET = \033[0m
