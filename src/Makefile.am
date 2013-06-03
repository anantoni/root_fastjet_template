# Tool-specific substitution variables
CC = @CXX@
BINDIR        = ../bin/
PROGNAME      = @PACKAGE@
SOURCES       = main.cc MyHistogram.cc
AM_CPPFLAGS   = MyHistogram.h
OBJECTS       = $(patsubst %.cc, %.o, $(SOURCES))
ROOTCFLAGS    := @ROOTCFLAGS@
ROOTLIBS      := @ROOTLIBS@
ROOTGLIBS     := @ROOTGLIBS@
CFLAGS        += -I. -I.. -I../include $(ROOTCFLAGS)
LIBS          += $(ROOTLIBS)
LDFLAGS       = -O -L@ROOTLIBDIR@
FASTJET_CXXFLAGS = @FASTJET_CXXFLAGS@
FASTJET_LIBS  = @FASTJET_LIBS@

all	: 	$(PROGNAME)

$(PROGNAME):	$(OBJECTS)
		$(CC) -o $(BINDIR)$@ $(OBJECTS) $(LDFLAGS) $(LIBS)
		echo $(FASTJET_CXXFLAGS)
		echo $(FASTJET_LIBS)

%.o : 		%.cc
		$(CC) ${CFLAGS} -c -g -o $@ $<

test:
	@echo $(ROOTCFLAGS)

clean-local:	
	-rm -f ${PROGNAME} ${OBJECTS}

