# This is the default target, which will be built when 
# you invoke make
CC := i686-w64-mingw32-gcc
OUTPUTFILE=cat_file.exe
INSTALLDIR=binaries
CFLAGS = -Wall

.PHONY: all
all: $(OUTPUTFILE)

$(OUTPUTFILE): 
	${CC} ${CFLAGS} -o $(OUTPUTFILE) cat_file.c


# This rule tells make to copy hello to the binaries subdirectory,
# creating it if necessary
.PHONY: install
install:
	mkdir -p binaries
	cp -p cat_file binaries

# This rule tells make to delete hello and hello.o
.PHONY: clean 
clean:
	rm -f cat_file.exe	


# i686-w64-mingw32-gcc -o cat_file.exe  cat_file.c