AC_INIT([wmCalClock], [1.26], [wmaker-dev@googlegroups.com])
AC_PREREQ([2.69])
AC_CONFIG_AUX_DIR([build-aux])
AM_INIT_AUTOMAKE([1.13 no-dist-gzip dist-xz foreign subdir-objects tar-pax -Wall])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_SRCDIR([Src/wmCalClock.c])

AC_PROG_CC
AC_PROG_INSTALL

PKG_CHECK_MODULES([x11],  [x11])
PKG_CHECK_MODULES([xext], [xext])
PKG_CHECK_MODULES([xpm],  [xpm])

AC_CHECK_LIB([nsl], [gethostbyname])
AC_CHECK_LIB([socket], [connect])

AC_CHECK_HEADERS([unistd.h])

AC_CONFIG_FILES([Makefile Src/Makefile])
AC_OUTPUT
