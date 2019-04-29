CFLAGS = -Wall -Werror
OBJ = g++ $(CFLAGS) -c $< -o $@
TOBJT = g++ $(CFLAGS) -I thirtdparty/catch2 -c $< -o $@

.PHONY: clean

all: target1 target2 target3 target4 bin/geometry.exe bin/geometry-test

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

bin/geometry-test: build/test/test.o build/test/getarea.o build/test/getperim.o build/test/inter.o
	g++ $(CFLAGS) -I thirtdparty/catch2 $^ -o $@

build/test/test.o: test/test.cpp test/TESTgeometry.h
	$(TOBJT)

build/test/getarea.o: test/TESTgetarea.cpp test/TESTgeometry.h
	$(TOBJT)

build/test/getperim.o: test/TESTgetperim.cpp test/TESTgeometry.h
	$(TOBJT)

build/test/inter.o: test/TESTinter.cpp test/TESTgeometry.h
	$(TOBJT)

clean:
	rm -r build
	rm -r bin
