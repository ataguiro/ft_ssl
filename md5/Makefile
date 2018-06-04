# ===== Editable =====
NAME	:=	ft_ssl
INDEX	:=	1
# ====================

# ===== Standard =====
CC		:=	gcc
CFLAGS	:=	-Werror -Wextra -Wall
SRCDIR	:=	src/
OBJDIR	:=	obj/
INCDIR	:=	include/
SRC		:=	$(SRCDIR)ft_ssl.c
OBJ		:=	$(SRC:$(SRCDIR)%.c=$(OBJDIR)%.o)
INC		:=	-I./$(INCDIR)
CACHEF	:=	.cache_exists
# ====================

# ====== Colors ======
CLEAR		= "\033[2K"
UP			= "\033[A"
EOC			= "\033[0;0m"
BLACK		= "\033[0;30m"
RED			= "\033[0;31m"
BRED		= "\033[1;31m"
GREEN		= "\033[0;32m"
BGREEN		= "\033[1;32m"
YELLOW		= "\033[0;33m"
BLUE		= "\033[0;34m"
PURPLE		= "\033[0;35m"
CYAN		= "\033[0;36m"
WHITE		= "\033[0;37m"
# ====================

.PHONY: all norme clean fclean re
.SILENT:

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@ $(INC)
	echo $(GREEN) "\n✓ $@ ok" $(EOC)

$(OBJDIR)%.o: $(SRCDIR)%.c $(CACHEF)
	$(CC) $(CFLAGS) -c $< -o $@ $(INC)
	printf "\r"
	printf $(BGREEN)"[ compiling $(NAME)... ] "
	printf "$(shell echo 'scale=2;$(INDEX)/$(shell echo '$(SRC)' | wc -w) * 100' | bc)%%"$(EOC)
	$(eval INDEX=$(shell echo $$(($(INDEX)+1))))

$(CACHEF):
	test -d $(OBJDIR) || mkdir $(OBJDIR)
	test -d $(CACHEF) || touch $(CACHEF)

%.c:
	printf $(RED)"Missing file : $@\n"$(EOC)

norme:
	norminette $(SRCDIR) $(INCDIR) | grep -v Norme -B1 || true
	norminette $(LIBFT)$(SRCDIR) $(LIBFT)$(INCDIR) | grep -v Norme -B1 || true

clean:
	rm -rf $(OBJDIR) $(CACHEF)
	printf $(YELLOW)"All objects removed\n"$(EOC)

fclean: clean
	rm -f $(NAME)
	printf $(RED)"$(NAME) removed\n"$(EOC)

re: fclean all
