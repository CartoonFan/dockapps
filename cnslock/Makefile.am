bin_PROGRAMS = cnslock
cnslock_SOURCES = cnslock.c kleds.c graphics/caps_num_scroll.xpm include/kleds.h
dist_man_MANS = cnslock.1
EXTRA_DIST = CHANGES

AM_CFLAGS = $(x11_CFLAGS) $(dockapp_CFLAGS)
LIBS += $(x11_LIBS) $(dockapp_LIBS)

desktopdir = @datadir@/applications
dist_desktop_DATA = cnslock.desktop
