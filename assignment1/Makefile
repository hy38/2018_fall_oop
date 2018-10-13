OBJECTS = Main.o Candy.o Cookie.o dessertItem.o Icecream.o Sundae.o

CC = g++
CFLAGS = -c
TARGET = Main

$(TARGET): $(OBJECTS)
	$(CC) -o $(TARGET) $(OBJECTS)

clean:
	rm -f $(OBJECTS) $(TARGET)

Main.o: Main.cpp
Candy.o: Candy.cpp
Cookie.o : Cookie.cpp
dessertItem.o : dessertItem.cpp
Icecream.o : Icecream.cpp
Sundae.o : Sundae.cpp