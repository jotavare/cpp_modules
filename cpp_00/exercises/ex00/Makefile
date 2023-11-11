# MAIN
CC = c++
NAME = megaphone
RM = rm -f

# FLAGS
CFLAGS = -Wall -Wextra -Werror -std=c++98
NO_PRINT = --no-print-directory

# SOURCES
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

# RULES
all: $(NAME)

$(NAME): $(OBJS)
	echo "...Linking $(NAME)..."
	$(CC) $(CFLAGS) $(NO_PRINT) $(OBJS) -o $(NAME)

%.o: %.cpp
	echo "...Compiling $<..."
	$(CC) $(CFLAGS) $(NO_PRINT) -c $< -o $@

clean:
	echo "...Cleaning $(NAME) object files..."
	$(RM) $(OBJS)

fclean: clean
	echo "...Cleaning $(NAME)..."
	$(RM) $(NAME)

.SILENT: all clean fclean