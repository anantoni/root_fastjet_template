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
PYTHIA_CXXFLAGS      = @PYTHIA_CXXFLAGS@
PYTHIA_LIBS          = @PYTHIA_LIBS@
LIBPYTHIA            = @LIBPYTHIA@
HEPMC_CXXFLAGS       = @HEPMC_CXXFLAGS@
HEPMC_LIBS           = @HEPMC_LIBS@
LIBHEPMC             = @LIBHEPMC@
AM_CFLAGS            = -I. -I.. -I../include $(ROOTCFLAGS) $(FJ_CXXFLAGS) $(PYTHIA_CXXFLAGS) $(HEPMC_CXXFLAGS)
MYLIB                = -lmylib
LIBS                 = $(ROOTLIBS) $(FJ_LIBS) $(LIBPYTHIA) $(MYLIB) $(LIBHEPMC)
AM_LDFLAGS           = -L@ROOTLIBDIR@ -L../lib/.libs $(FJ_CXXFLAGS) $(PYTHIA_LIBS) $(HEPMC_LIBS)

all	: 	$(PROGNAME)

$(PROGNAME):	$(OBJECTS)
		$(CC) -o $(BINDIR)$@ $(OBJECTS) $(AM_LDFLAGS) $(LIBS)

main.o : 	main.cc
		$(CC) ${AM_CFLAGS} -c -g -o $@ $<

MyHistogram.o:  MyHistogram.cc
		$(CC) ${AM_CFLAGS} -c -g -o $@ $<

test:
	@echo $(ROOTCFLAGS)

