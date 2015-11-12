AC_INIT([hello], [0.1])
AC_PROG_CC
AC_CONFIG_FILES([Makefile])
AC_CHECK_HEADER([stdio.h],
	[AC_DEFINE([HAVE_STDIO_H], [1],
		[Define to 1 if you have <stdio.h>.])],
	[AC_MSG_ERROR([sorry, can't do anything for you])])
AC_CHECK_LIB([C],[printf])
AM_INIT_AUTOMAKE([-Wall foreign])
AC_OUTPUT
