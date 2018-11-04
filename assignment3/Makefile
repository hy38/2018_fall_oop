OBJECTS = main.o ShapePattern.o RectanglePattern.o TrianglePattern.o

CC = g++
CFLAGS = -c
TARGET = Main

$(TARGET): $(OBJECTS)
	$(CC) -o $(TARGET) $(OBJECTS)

clean:
	rm -f $(OBJECTS) $(TARGET)

main.o: main.cpp
ShapePattern.o : ShapePattern.cpp
RectanglePattern.o : RectanglePattern.cpp
TrianglePattern.o : TrianglePattern.cpp