# ==========================================
# Compiler and Flags Configuration
# ==========================================
# Define the compiler to use (change to gcc for C projects)
CXX = g++

# Define compilation flags (warnings, optimization, and language standard)
CXXFLAGS = -std=c++17 -Wall -Wextra -O2

# ==========================================
# File and Directory Definitions
# ==========================================
# Name of your final executable file
TARGET = my_program

# Automatically find all .cpp files in the directory
SRCS = $(wildcard *.cpp)

# Convert the list of source files into a list of object files (.cpp -> .o)
OBJS = $(SRCS:.cpp=.o)

# ==========================================
# Build Rules
# ==========================================

# The first target is the default target when running 'make'
all: $(TARGET)

# Rule to link object files together to create the executable
$(TARGET): $(OBJS)
        $(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Rule to compile individual source files into object files
%.o: %.cpp
        $(CXX) $(CXXFLAGS) -c $< -o $@

# Target to remove generated build artifacts and start clean
clean:
        rm -f $(OBJS) $(TARGET)

# Declare 'all' and 'clean' as phony targets so they don't conflict with real files
.PHONY: all clean
