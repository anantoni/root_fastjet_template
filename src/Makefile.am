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
CFLAGS        += -I. -I.. -I../include $(ROOTCFLAGS) $(FJ_CXXFLAGS)
LIBS          += $(ROOTLIBS)
LDFLAGS       = -O -L@ROOTLIBDIR@
FJ_CXXFLAGS   = @FASTJET_CXXFLAGS@
FJ_LIBS       = @FASTJET_LIBS@

all	: 	$(PROGNAME)

$(PROGNAME):	$(OBJECTS)
		$(CC) -o $(BINDIR)$@ $(OBJECTS) $(LDFLAGS) $(LIBS) $(FJ_CXXFLAGS) $(FJ_LIBS)

%.o : 		%.cc
		$(CC) ${CFLAGS} -c -g -o $@ $<

test:
	@echo $(ROOTCFLAGS)

clean-local:	
	-rm -f ${PROGNAME} ${OBJECTS}

