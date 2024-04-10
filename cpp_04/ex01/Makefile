# COLORS
RESET	= "\033[0m"
RED 	= "\033[31m"
GREEN	= "\033[32m"

# MAIN
CXX = c++
NAME = brain
RM = rm -f

# FLAGS
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g -pedantic

# SOURCES
SRCS =	main.cpp \
		Animal.cpp \
		Cat.cpp \
		Dog.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \
		Brain.cpp \
		
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
