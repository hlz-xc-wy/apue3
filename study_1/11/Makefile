
PROGS = 11-2 11-3 11-4 11-5 11-13 11-16

LDLIBS = -lapue -lpthread  -lrt -lbsd

all:	$(PROGS)

%:	%.c $(LIBAPUE)
	$(CC) $(CFLAGS) $@.c -o $@ $(LDFLAGS) $(LDLIBS)

clean:
		rm -f ${PROGS} *.o
