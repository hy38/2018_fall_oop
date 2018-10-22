OBJECTS = main.o person.o footballer.o mathTeacher.o

CC = g++
CFLAGS = -c
TARGET = Main

$(TARGET): $(OBJECTS)
	$(CC) -o $(TARGET) $(OBJECTS)

clean:
	rm -f $(OBJECTS) $(TARGET)

main.o: main.cpp
person.O : person.cpp
footballer.o : footballer.cpp
mathTeacher.o : mathTeacher.cpp