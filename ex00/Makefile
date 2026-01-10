CC = c++
CFLAGS = -Wall -Wextra -Werror -MMD -MP -std=c++98
NAME = CLAP
SOURCES = ClapTrap.cpp  main.cpp
HEADERS = ClapTrap.hpp
OBJECTS = $(SOURCES:.cpp=.o)
DEPS = $(SOURCES:.cpp=.d)


all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^
%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<
-include $(DEPS)
debug: CFLAGS += -g3
debug: clean all

clean:
	rm -f $(OBJECTS) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re debug