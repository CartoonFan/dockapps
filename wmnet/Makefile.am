bin_PROGRAMS = wmnet
wmnet_SOURCES = config.h drivers.c \
		wmnet.c \
		wmnet.h XPM/arrow.xbm

if WMNET_LOCAL_OPTS
wmnet_SOURCES += getopt1.c getopt.c getopt.h
endif

dist_man_MANS = wmnet.1x

AM_CFLAGS = $(X11_CFLAGS) $(XEXT_CFLAGS)
LIBS += -lm $(X11_LIBS) $(XEXT_LIBS)
