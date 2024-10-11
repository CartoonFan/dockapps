CC=gcc
INSTALL=install
PREFIX=/usr/local
CFLAGS+=-Wall `pkg-config --cflags dockapp`
LIBS=`pkg-config --libs dockapp x11 xext `

rectangles: rectangles.o
	$(CC) $(LDFLAGS) -o $@ $^ $(LIBS)

rectangles.o: rectangles.c
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $<

install:
	$(INSTALL) -d $(DESTDIR)$(PREFIX)/bin
	$(INSTALL) rectangles $(DESTDIR)$(PREFIX)/bin

clean:
	rm -f rectangles rectangles.o
