CC:= cc
CFLAGS:= -O2 -g

all: main.c
	$(CC) $(CFLAGS) $?
