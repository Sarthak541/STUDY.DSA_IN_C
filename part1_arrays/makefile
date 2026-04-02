CC = gcc
CFLAGS = -std=c99 -fsanitize=address,undefined -g -Wall -Werror
TARGET = array

.PHONY = all clean

all: $(TARGET)

array: array.c
	$(CC) $(CFLAGS) array.c -o $(TARGET)

clean:
	rm -rf $(TARGET)