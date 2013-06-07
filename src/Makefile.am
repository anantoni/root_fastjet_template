# Tool-specific substitution variables
CC = @CXX@
BINDIR               = ../bin/
PROGNAME             = @PACKAGE@
SOURCES              = main.cc MyHistogram.cc
OBJECTS              = main.o MyHistogram.o
ROOTCFLAGS           = @ROOTCFLAGS@
ROOTLIBS             = @ROOTLIBS@
ROOTGLIBS            = @ROOTGLIBS@
FJ_CXXFLAGS          = @FASTJET_CXXFLAGS@
FJ_LIBS              = @FASTJET_LIBS@
AM_CFLAGS            = -Wall -I. -I.. -I../include $(ROOTCFLAGS) $(FJ_CXXFLAGS)
MYLIB                = -lmylib
LIBS                 = $(ROOTLIBS) $(FJ_LIBS)
AM_LDFLAGS           = -O -L@ROOTLIBDIR@ -L../lib/.libs $(FJ_CXXFLAGS)

all	: 	$(PROGNAME)

$(PROGNAME):	$(OBJECTS)
		$(CC) -o $(BINDIR)$@ $(OBJECTS) $(AM_LDFLAGS) $(MYLIB) $(LIBS)

main.o : 	main.cc
		$(CC) ${AM_CFLAGS} -c -g -o $@ $<

MyHistogram.o:  MyHistogram.cc
		$(CC) ${AM_CFLAGS} -c -g -o $@ $<

test:
	@echo $(ROOTCFLAGS)

clean-local:	
	-rm -f ${PROGNAME} ${OBJECTS}

