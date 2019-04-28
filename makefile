CFLAGS = -Wall -Werror
OBJ = g++ $(CFAGS) -c $< -o $@
TOBJT = g++ $(GFAGS) -I thirtdparty/catch2 -c $< -o $@

.PHONY: clean

all: target1 target2 target3 target4 bin/geometry.exe

target1:
	mkdir -p build

target2:
	mkdir -p bin

target3:
	mkdir -p build/src

target4:
	mkdir -p build/test

bin/geometry.exe: build/main.o build/getperim.o build/getarea.o build/inter.o
	g++ $(CFLAGS) $^ -o $@

build/main.o: src/main.cpp src/geometry.h
	$(OBJ)

build/getarea.o: src/getarea.cpp src/geometry.h
	$(OBJ)

build/getperim.o: src/getperim.cpp src/geometry.h
	$(OBJ)

build/inter.o: src/inter.cpp src/geometry.h
	$(OBJ)


clean:
	rm build/*.o
	rm bin/*.exe
	rm -R build
	rm -R bin
