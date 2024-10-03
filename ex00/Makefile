NAME= zombie
CPP= c++
CFLAGS= -Wall -Wextra -Werror #-fsanitize=address
SRC= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJ= $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Zombie.hpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean