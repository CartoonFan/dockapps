AM_CFLAGS = $(x11_CFLAGS)  \
            $(xext_CFLAGS) \
            $(xpm_CFLAGS)

LDADD = $(x11_LIBS)  \
        $(xext_LIBS) \
        $(xpm_LIBS)

bin_PROGRAMS = wmCalClock

wmCalClock_SOURCES = wmCalClock.c \
                     wmCalClock_mask.xbm \
                     wmCalClock_master.xpm \
                     wmCalClock_master_LowColor.xpm \
                     xutils.c \
                     xutils.h

dist_man_MANS = wmCalClock.1
