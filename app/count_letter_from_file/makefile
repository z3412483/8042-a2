# This is the default target, which will be built when 
# you invoke make
CC := gcc
OUTPUTFILE=count_letter_from_file
INSTALLDIR=binaries
CFLAGS = -Wall
LIBS = `pkg-config --libs gtk+-3.0`

PACKAGE = `pkg-config --cflags --libs gtk+-3.0`

.PHONY: all
all: $(OUTPUTFILE)

# Build hello from hello.cpp
$(OUTPUTFILE): count.o
	${CC} ${CFLAGS} count.o -o $(OUTPUTFILE) $(LIBS)

count.o:
	${CC} ${CFLAGS} -c count.c -o count.o $(PACKAGE)

# This rule tells make to copy hello to the binaries subdirectory,
# creating it if necessary
.PHONY: install
install:
	mkdir -p binaries
	cp -p count binaries

# This rule tells make to delete hello and hello.o
.PHONY: clean 
clean:
	rm -f count_letter_from_file
	rm -f count.o	
