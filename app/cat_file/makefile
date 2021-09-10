# This is the default target, which will be built when 
# you invoke make
CC := gcc
OUTPUTFILE=cat_file
INSTALLDIR=binaries
CFLAGS = -Wall
LIBS = `pkg-config --libs gtk+-3.0`

#PACKAGE = `pkg-config --cflags --libs gtk+-3.0`

.PHONY: all
all: $(OUTPUTFILE)

# Build hello from hello.cpp
$(OUTPUTFILE): cat_file.o
	${CC} ${CFLAGS} cat_file.o -o $(OUTPUTFILE) $(LIBS)

count.o:
	#${CC} ${CFLAGS} -c cat_file.c -o cat_file.o $(PACKAGE)
	${CC} ${CFLAGS} -c cat_file.c -o cat_file.o

# This rule tells make to copy hello to the binaries subdirectory,
# creating it if necessary
.PHONY: install
install:
	mkdir -p binaries
	cp -p cat_file binaries

# This rule tells make to delete hello and hello.o
.PHONY: clean 
clean:
	rm -f cat_file
	rm -f cat_file.o	
