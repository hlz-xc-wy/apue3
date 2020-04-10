
PROGS = 16-1 16-9

LDLIBS = -lapue -lpthread  -lrt -lbsd

all:	$(PROGS)

%:	%.c $(LIBAPUE)
	$(CC) $(CFLAGS) $@.c -o $@ $(LDFLAGS) $(LDLIBS)

clean:
		rm -f ${PROGS} *.o
