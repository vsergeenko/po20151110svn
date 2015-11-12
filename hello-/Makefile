.PHONY: install uninstall clean distrib

CC = gcc
CFLAGS = -g -O2 -Wall
BINDIR = /usr/local/bin
PROG = hello

all: hello

hello: hello.o
	$(CC) -o $(PROG) $(CFLAGS) hello.o
	strip $(PROG)

.c.o:
	$(CC) -c $(CFLAGS) hello.c

install:
#	cp $(PROG) $(BINDIR)/$(PROG)
	install -g admin -m 550 $(BINDIR)/$(PROG)

clean:
	rm -f $(PROG) hello.o hello.tar.gz

uninstall:
	rm $(BINDIR)/$(PROG)

distrib:
	tar czf $(PROG).tar.gz *.c Makefile* configure.ac INSTALL README
