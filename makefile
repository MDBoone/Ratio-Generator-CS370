
CC = gcc
OUT_EXE = hw1
FILES = Starter.c Executor.c Executor.h

build:
	$(CC) -o $(OUT_EXE) $(FILES) -I. -Wall -Wfatal-errors

clean:
	rm -f $(OUT_EXE)