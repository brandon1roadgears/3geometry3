CFLAGS = -Wall -Werror
OBJ = g++ $(CFAGS) -c $< -o $@

.PHONY: clean

all: target1 target2 bin/geometry.exe

target1:
	mkdir -p build

target2:
	mkdir -p bin

