# This is the default target, which will be built when 
# you invoke make
OUTPUTFILE=hello
INSTALLDIR=binaries
CFLAGS = -Wall

.PHONY: all
all: hello

# Build hello from hello.cpp
$(OUTPUTFILE): hello.o
	${CC} ${CFLAGS} hello.o -o $(OUTPUTFILE)

hello.o:
	${CC} ${CFLAGS} -c hello.c -o hello.o

# This rule tells make to copy hello to the binaries subdirectory,
# creating it if necessary
.PHONY: install
install:
	mkdir -p binaries
	cp -p hello binaries

# This rule tells make to delete hello and hello.o
.PHONY: clean 
clean:
	rm -f hello
	rm -f hello.o