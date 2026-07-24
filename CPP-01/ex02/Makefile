NAME = HI_THIS_IS_BRAIN                                           

CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)                                         
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)            

%.o : %.cpp main.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -rf $(OBJ)
fclean: clean
	rm $(NAME)
re: fclean all

.PHONY: all clean fclean re

