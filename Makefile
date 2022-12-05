CXX		:= g++
CXX_FLAGS       := -g -std=c++17 
SRC		:= src
INCLUDE         := ./include
LIB		:= ./lib

LIBRARIES	:= -lglad -lglfw3dll
EXECUTABLE	:= main

all:./$(EXECUTABLE)

run: all
	./$(EXECUTABLE)

$(EXECUTABLE):$(SRC)/*.cpp
	$(CXX) $(CXX_FLAGS) -I$(INCLUDE) -L$(LIB) $^ -o $@ $(LIBRARIES)