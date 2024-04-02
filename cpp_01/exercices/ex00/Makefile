# COLORS
RESET	= "\033[0m"
RED 	= "\033[31m"
GREEN	= "\033[32m"

# CXX AND CXXFLAGS?
# https://www.gnu.org/software/make/manual/html_node/Implicit-Variables.html

# MAIN
CXX = c++
NAME = zombie
RM = rm -f

# FLAGS
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -pedantic

# SOURCES
SRCS =	main.cpp \
		newZombie.cpp \
		randomChump.cpp \
		Zombie.cpp \

OBJS = $(SRCS:.cpp=.o)

# RULES
all: $(NAME)

$(NAME): $(OBJS)
	@echo $(GREEN)"...linking $(NAME)..."$(RESET)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	@echo $(GREEN)"...compiling $<..."$(RESET)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo $(RED)"...cleaning $(NAME) object files..."$(RESET)
	$(RM) $(OBJS)

fclean: clean
	@echo $(RED)"...cleaning $(NAME)..."$(RESET)
	$(RM) $(NAME)

re: fclean all
