OBJ = main.o one_para_ls.o ls_with_a.o initList.o ls_with_c.o ls_with_l.o get_current_dir.o
EPS = ls.h
CC = gcc
CFLAGS = -I.
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

ls: $(OBJ)
	$(CC) -g -o $@ $^ $(CFLAGS)

.PHONY: clean
clean:
	rm *.o 
