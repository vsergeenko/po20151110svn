CC = gcc
CFLAGS = -g -O2 -Wall
BINDIR = /usr/local/bin

all: hello

hello: hello.c
	$(CC) -o hello $(CFLAGS) hello.o

.c.o:
	$(CC) -c $(CFLAGS) hello.c

install: hello
	cp hello $(BINDIR)/hello

clean:
	rm hello hello.o

uninstall:
	rm $(BINDIR)/hello
