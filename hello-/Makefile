CC = gcc
CFLAGS = -g -O2 -Wall
BINDIR = /usr/local/bin

all: hello

hello: hello.o
	$(CC) -o hello $(CFLAGS) hello.o

.c.o:
	$(CC) -c $(CFLAGS) hello.c

install: hello
	cp hello $(BINDIR)/hello

clean:
	rm -f hello hello.o hello.tar.gz

uninstall:
	rm $(BINDIR)/hello

distrib:
	tar czf hello.tar.gz *.c Makefile* configure.ac INSTALL README

