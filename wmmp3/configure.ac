AC_INIT(wmmp3,0.12)
AC_CONFIG_SRCDIR(main.c)
AM_INIT_AUTOMAKE(foreign)
AC_PROG_CC
AC_PROG_INSTALL

if test "$x_includes" != "NONE"; then
        CFLAGS="$CFLAGS -I$x_includes"
fi

if test "$x_libraries" != "NONE"; then
        LDFLAGS="$LDFLAGS -L$x_libraries"
fi

AC_CHECK_LIB(X11, XOpenDisplay)
AC_CHECK_LIB(Xext, XShapeCombineMask)
AC_CHECK_LIB(Xpm, XpmCreatePixmapFromData, , , $LIBS)

AC_OUTPUT(Makefile)
