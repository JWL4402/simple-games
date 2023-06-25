CC=gcc
# c compiler to use
CFLAGS=-c -Wall
# compiler flags/arguments

BUILD_DIR=/build
# the build directory. leave empty for root directory.
EXECUTABLE=program
# name of the executable
BUILD_PATH=.$(BUILD_DIR)/$(EXECUTABLE)
# build path

SOURCES=$(wildcard *.c)
# c files to be compiled

OBJ_DIR=/obj
# directory to hold object files
OBJECTS=$(SOURCES:.c=.o)
# all object files
COMPILED_OBJECTS=$(patsubst %, .$(OBJ_DIR)/%, $(OBJECTS))
# all object files after compiled



all: $(SOURCES) run

run: $(BUILD_PATH)
	$(BUILD_PATH)
# runs the executable

$(BUILD_PATH): $(OBJECTS)
	$(CC) $(COMPILED_OBJECTS) -o $@
# builds the executable

.c.o:
	$(CC) $(CFLAGS) $< -o .$(OBJ_DIR)/$@
# compiles .c files into .o files