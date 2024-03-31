# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ixu <ixu@student.hive.fi>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/23 15:42:20 by ixu               #+#    #+#              #
#    Updated: 2024/03/31 21:26:17 by ixu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the library
NAME := libft.a

# Compiler and flags
CC := cc
CFLAGS := -Wall -Wextra -Werror

# Color scheme
COLOR_GREEN := \033[0;32m
COLOR_Magenta := \033[0;35m
COLOR_CYAN := \033[0;36m
COLOR_END := \033[0m

# Directory locations
NBR_DIR := base/nbr/
MEM_DIR := base/mem/
CHAR_DIR := base/char/
STR_DIR := base/str/
IO_UTILS_DIR := base/io_utils/
LIST_DIR := base/lst/
GNL_DIR := gnl/
FT_DPRINTF_DIR := ft_dprintf/
OBJS_DIR := objs/

# Source file names by directory
NBR_FILES := ft_atoi.c \
				ft_atoi_base.c \
				ft_strtol.c \
				ft_itoa.c
MEM_FILES := ft_bzero.c \
				ft_calloc.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c
CHAR_FILES := ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_tolower.c \
				ft_toupper.c
STR_FILES := ft_split.c \
				ft_split_charset.c \
				ft_split_pipex.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strcmp.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c
IO_UTILS_FILES := ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c
LIST_FILES := ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c
GNL_FILES := get_next_line.c \
				get_next_line_utils.c
FT_DPRINTF_FILES := ft_dprintf.c \
					flags.c \
					print_chars.c \
					print_str.c \
					print_dec.c \
					print_udec.c \
					print_hex.c \
					print_ptr.c \
					print_utils.c \
					ft_dprintf_utils.c

SRC_FILES := $(NBR_FILES) $(MEM_FILES) $(CHAR_FILES) $(STR_FILES) \
				$(IO_UTILS_FILES) $(LIST_FILES) $(GNL_FILES) $(FT_DPRINTF_FILES)

# Object files with path
OBJS := $(addprefix $(OBJS_DIR), $(SRC_FILES:.c=.o))

all: $(NAME)

$(NAME): $(OBJS_DIR) $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "$(COLOR_GREEN)\n$(NAME) created$(COLOR_END)"

$(OBJS_DIR):
	@mkdir $(OBJS_DIR)
	@echo "$(COLOR_CYAN)$(OBJS_DIR) directory created$(COLOR_END)"

$(OBJS_DIR)%.o: $(NBR_DIR)%.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(COLOR_CYAN)compiling...\r\c$(COLOR_END)"

$(OBJS_DIR)%.o: $(MEM_DIR)%.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(COLOR_CYAN)compiling...\r\c$(COLOR_END)"

$(OBJS_DIR)%.o: $(CHAR_DIR)%.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(COLOR_CYAN)compiling...\r\c$(COLOR_END)"

$(OBJS_DIR)%.o: $(STR_DIR)%.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(COLOR_CYAN)compiling...\r\c$(COLOR_END)"

$(OBJS_DIR)%.o: $(IO_UTILS_DIR)%.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(COLOR_CYAN)compiling...\r\c$(COLOR_END)"

$(OBJS_DIR)%.o: $(LIST_DIR)%.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(COLOR_CYAN)compiling...\r\c$(COLOR_END)"

$(OBJS_DIR)%.o: $(GNL_DIR)%.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(COLOR_CYAN)compiling...\r\c$(COLOR_END)"

$(OBJS_DIR)%.o: $(FT_DPRINTF_DIR)%.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(COLOR_CYAN)compiling...\r\c$(COLOR_END)"

clean:
	@rm -rf $(OBJS_DIR)
	@echo "$(COLOR_Magenta)$(OBJS_DIR) directory and object files removed$(COLOR_END)"
 
fclean: clean
	@rm -f $(NAME)
	@echo "$(COLOR_Magenta)$(NAME) removed$(COLOR_END)"
	
re: fclean all