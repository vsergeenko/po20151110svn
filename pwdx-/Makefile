# false target
.PHONY: clean

# options
CC = gcc
CFLAGS = -g -O2 -Wall

# main target
all: pwdx-svn libpwdx-svn

# compile programm
pwdx-svn: pwdx-svn.c
	@$(CC) -o pwdx-svn $(CFLAGS) pwdx-svn.c
libpwdx-svn: libpwdx-svn.c
	@$(CC) -o libpwdx-svn $(CFLAGS) libpwdx-svn.c

# clean local temp files
clean:
	@rm -f *.o pwdx-svn libpwdx-svn
