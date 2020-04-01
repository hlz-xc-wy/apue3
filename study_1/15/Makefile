
PROGS = 15-5 15-6

LDLIBS = -lapue -lpthread  -lrt -lbsd

all:	$(PROGS)

%:	%.c $(LIBAPUE)
	$(CC) $(CFLAGS) $@.c -o $@ $(LDFLAGS) $(LDLIBS)

clean:
		rm -f ${PROGS} *.o
