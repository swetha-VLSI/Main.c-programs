CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = student_manager
SOURCES = main.c student.c
HEADERS = student.h

all: $(TARGET)

$(TARGET): $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all clean
