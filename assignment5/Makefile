OBJECTS = main.o Dog.o Fish.o Horse.o Lizard.o Monkey.o

CC = g++
CFLAGS = -c
TARGET = Main

$(TARGET): $(OBJECTS)
	$(CC) -o $(TARGET) $(OBJECTS)

clean:
	rm -f $(OBJECTS) $(TARGET)

main.o: main.cpp
Dog.o : Dog.cpp
Fish.o: Fish.cpp
Horse.o : Horse.cpp
Lizard.o : Lizard.cpp
Monkey.o :: Monkey.cpp