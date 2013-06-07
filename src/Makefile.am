# Tool-specific substitution variables
CC = @CXX@
BINDIR               = ../bin/
PROGNAME             = @PACKAGE@
SOURCES              = main.cc MyHistogram.cc
OBJECTS              = main.o MyHistogram.o
ROOTCFLAGS           = @ROOTCFLAGS@
ROOTLIBS             = @ROOTLIBS@
ROOTGLIBS            = @ROOTGLIBS@
AM_CFLAGS            = -Wall -I. -I.. -I../include $(ROOTCFLAGS) $(FJ_CXXFLAGS)
MYLIB                = ../lib/.libs/libmylib.a
LIBS                 = $(ROOTLIBS)
AM_LDFLAGS           = -O -L@ROOTLIBDIR@
FJ_CXXFLAGS          = @FASTJET_CXXFLAGS@
FJ_LIBS              = @FASTJET_LIBS@

all	: 	$(PROGNAME)

$(PROGNAME):	$(OBJECTS)
		$(CC) -o $(BINDIR)$@ $(OBJECTS) $(MYLIB) $(AM_LDFLAGS) $(LIBS) $(FJ_CXXFLAGS) $(FJ_LIBS) 

main.o : 	main.cc
		$(CC) ${AM_CFLAGS} -c -g -o $@ $<

MyHistogram.o:  MyHistogram.cc
		$(CC) ${AM_CFLAGS} -c -g -o $@ $<

test:
	@echo $(ROOTCFLAGS)

clean-local:	
	-rm -f ${PROGNAME} ${OBJECTS}

