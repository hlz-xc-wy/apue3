
PROGS = 11-2 11-3 11-4

LDLIBS = -lapue -lpthread

all:	$(PROGS)

%:	%.c $(LIBAPUE)
	$(CC) $(CFLAGS) $@.c -o $@ $(LDFLAGS) $(LDLIBS)

clean:
		rm -f ${PROGS} *.o
