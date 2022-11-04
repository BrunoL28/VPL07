CC := g++
CFLAGS := -g -Wall -O3 -std=c++11 -I include/
SRC := src
BUILDDIR := build
TARGET := main.out

all: main

intruso:
    $(CC) $(CFLAGS) -c intruso.cpp -o intruso.o

main: intruso
    $(CC) $(CFLAGS) intruso.o main.cpp -o main.out

clean:
    $(RM) -r intruso.o $(TARGET)