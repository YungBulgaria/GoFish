# Define compiler and flags
CXX = g++
CXXFLAGS = -Wall -g

# Define object files and executable
OBJ = main.o Deck.o Cards.o
TARGET = main

# Build the executable
all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

# Build object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up
clean:
	rm -f $(OBJ) $(TARGET)