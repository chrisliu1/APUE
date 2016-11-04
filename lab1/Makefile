CC=gcc
DEPS = vocabulary.h readfile.h matrices.h
CFLAGS=-I.
OBJ=lab.o CreateVocabulary.o FreeVocabulary.o PresentFile.o CreateMatrices.o

%.o: %.c $(DEPS)
	$(CC) -g -c -o  $@ $< $(CFLAGS)

query: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm *.o query

