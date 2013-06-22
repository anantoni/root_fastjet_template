# Tool-specific substitution variables
ARCHITECTURE = -m64
CC = @CXX@ $(ARCHITECTURE)
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

all	: 	$(PROGNAME) pythia-example

$(PROGNAME):	$(OBJECTS)
		$(CC) -o $(BINDIR)$@ $(OBJECTS) $(AM_LDFLAGS) $(LIBS)

pythia-example: main01.o
		$(CC) -o $(BINDIR)$@ main01.o $(PYTHIA_LIBS) $(LIBPYTHIA)

main.o : 	main.cc
		$(CC) ${AM_CFLAGS} -c -g -o $@ $<

main01.o : 	main01.cc
		$(CC) $(PYTHIA_CXXFLAGS) -c -g -o $@ $<

MyHistogram.o:  MyHistogram.cc
		$(CC) ${AM_CFLAGS} -c -g -o $@ $<

test:
	@echo $(ROOTCFLAGS)

clean:
	rm -f *.o
	rm -f ../bin/root_fastjet_template
	rm -f ../bin/pythia-example
