OBJ = main.o one_para_ls.o get_current_dir.o
DEPS = ls.h
CC = gcc
CFLAGS = -I.
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

ls: $(OBJ)
	$(CC) -g -o $@ $^ $(CFLAGS)

