
PROGS = 14-7

LDLIBS = -lapue -lpthread  -lrt -lbsd

all:	$(PROGS)

%:	%.c $(LIBAPUE)
	$(CC) $(CFLAGS) $@.c -o $@ $(LDFLAGS) $(LDLIBS)

clean:
		rm -f ${PROGS} *.o
