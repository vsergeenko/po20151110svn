# false target
.PHONY: install i-lib uninstall u-lib clean distrib

# options
CC = gcc
CFLAGS = -g -O2 -Wall
BINDIR = /usr/local/bin
LIBDIR = /usr/local/lib
INCLUDEDIR=/usr/local/include

# main target
all: pwdx-svn envx-svn
lib: libpe-svn.so

# compile programm
envx-svn: envx-svn.c libpe-svn.so
	@$(CC) -o envx-svn $(CFLAGS) envx-svn.c libpe-svn.so
pwdx-svn: pwdx-svn.c libpe-svn.so
	@$(CC) -o pwdx-svn $(CFLAGS) pwdx-svn.c libpe-svn.so

# compile libs
libpe-svn.so: libpe-svn.o
	@$(CC) -shared -o libpe-svn.so $(CFLAGS) libpe-svn.o
libpe-svn.o
	@$(CC) -c -o libpe-svn.o libpe-svn.c

# install programm
install:
	@install -m 755 -s pwdx-svn $(BINDIR)/pwdx-svn
	@install -m 755 -s envx-svn $(BINDIR)/envx-svn

i-lib:
	@install libpe-svn.so $(LIBDIR)/libpe-svn.so
	@ldconfig

# clean local temp files
clean:
	@rm -f envx-svn pwdx-svn libpe-svn.so *.o *.tar.gz

# uninstall programm
uninstall:
	@rm $(BINDIR)/envx-svn
	@rm $(BINDIR)/pwdx-svn

u-lib:
	@rm $(LIBDIR)/libpe-svn.so
	@ldconfig

# create source distrib
dist:
	@tar czfv pwdx-envx.tar.gz *.c *.so Makefile INSTALL README

