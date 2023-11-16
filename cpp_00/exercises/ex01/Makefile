# COLORS
RESET	= "\033[0m"
RED 	= "\033[31m"
GREEN	= "\033[32m"

# MAIN
CC = c++
NAME = phonebook
RM = rm -f

# FLAGS
CFLAGS = -Wall -Wextra -Werror -std=c++98

# SOURCES
SRCS =	main.cpp \
		sources/phonebook.cpp \
		sources/contact.cpp \
		
OBJS = $(SRCS:.cpp=.o)

# RULES
all: $(NAME)

$(NAME): $(OBJS)
	@echo $(GREEN)"...linking $(NAME)..."$(RESET)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	

%.o: %.cpp
	@echo $(GREEN)"...compiling $<..."$(RESET)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo $(RED)"...cleaning $(NAME) object files..."$(RESET)
	$(RM) $(OBJS)

fclean: clean
	@echo $(RED)"...cleaning $(NAME)..."$(RESET)
	$(RM) $(NAME)

re: fclean all