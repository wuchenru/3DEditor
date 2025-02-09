CC = g++
CFLAGS = -std=c++11 -Wall
OBJFILES = main.o Vector3.o Object3D.o Cube.o Editor.o

all: simple3deditor

simple3deditor: $(OBJFILES)
	$(CC) $(CFLAGS) -o simple3deditor $(OBJFILES)

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

Vector3.o: Vector3.h Vector3.cpp
	$(CC) $(CFLAGS) -c Vector3.cpp

Object3D.o: Object3D.h Object3D.cpp
	$(CC) $(CFLAGS) -c Object3D.cpp

Cube.o: Cube.h Cube.cpp
	$(CC) $(CFLAGS) -c Cube.cpp

Editor.o: Editor.h Editor.cpp
	$(CC) $(CFLAGS) -c Editor.cpp

clean:
	rm -f *.o simple3deditor
