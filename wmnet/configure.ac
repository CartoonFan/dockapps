AC_INIT([wmnet], [1.7], [wmaker-dev@googlegroups.com])
AM_INIT_AUTOMAKE([foreign])
AC_CONFIG_SRCDIR([configure.ac])
AC_PROG_CC
AC_CANONICAL_HOST

LOCAL_OPTS=n
case "$host" in
	*-freebsd*)
		LOCAL_OPTS=y
		;;
	*-openbsd*)
		LOCAL_OPTS=y
		;;
esac

AM_CONDITIONAL([WMNET_LOCAL_OPTS], [test "$LOCAL_OPTS" = "y"])

PKG_CHECK_MODULES([X11], [x11])
PKG_CHECK_MODULES([XEXT], [xext])
AC_CONFIG_FILES([Makefile])
AC_OUTPUT
