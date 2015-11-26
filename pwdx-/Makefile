# false target
.PHONY: install uninstall clean distrib

# options
CC = gcc
CFLAGS = -g -O2 -Wall
BINDIR = /usr/local/bin
PROG = pwdx-svn

# main target
all: $(PROG)

# compile programm
$(PROG): $(PROG).o
	@$(CC) -o $(PROG) $(CFLAGS) $(PROG).o

# compile object
.c.o:
	@$(CC) -c $(CFLAGS) $(PROG).c

# install programm
install:
	@install -m 755 -s $(PROG) $(BINDIR)/$(PROG)

# clean local temp files
clean:
	@rm -f $(PROG) $(PROG).o $(PROG).tar.gz

# uninstall programm
uninstall:
	@rm $(BINDIR)/$(PROG)

# create source distrib
dist:
	@tar czfv $(PROG).tar.gz *.c Makefile INSTALL README

