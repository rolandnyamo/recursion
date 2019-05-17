# # .author: Roland Nyamoga
# # .descr: Makefile for recursive functions

CC = g++

# CFLAGS = -c
CFLAGS = -Wall #-v
CFLAGS += -std=c++11
CFLAGS += -g #To debug with gdb

SRCS = recursion.cpp main.cpp menu.cpp
OBJS = recursion.o main.o menu.o
HEADERS = recursion.hpp
OUT = rfun #Name of the executable

#My output depends on the objects.
$(OUT): $(OBJS)
	$(CC) $(SRCS) $(CFLAGS) -o $(OUT)

#Objects depend on source and header files
$(OBJS): $(SRCS) $(HEADERS)
	$(CC) -c $(SRCS) $(HEADERS)

#This cleans all files created from compiling
clean:
	rm $(OBJS) $(OUT) *.gch 
