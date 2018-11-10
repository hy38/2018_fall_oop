OBJECTS = main.o

CC = g++
CFLAGS = -c
TARGET = Main

$(TARGET): $(OBJECTS)
	$(CC) -o $(TARGET) $(OBJECTS)

clean:
	rm -f $(OBJECTS) $(TARGET)

main.o: main.cpp
