CC = gcc
CFLAGS = -std=c99 -fsanitize=address,undefined -g -Wall -Werror
TARGET = sorting

.PHONY = all clean

all: $(TARGET)

sorting: sorting.c
	$(CC) $(CFLAGS) sorting.c -o $(TARGET)

clean:
	rm -rf $(TARGET)