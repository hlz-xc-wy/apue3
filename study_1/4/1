
PROGS = 4_3 4_8 4_9 4_12 4_16 4_21 4_24 4_25

LDLIBS = -lapue

all:	$(PROGS)

%:	%.c $(LIBAPUE)
	$(CC) $(CFLAGS) $@.c -o $@ $(LDFLAGS) $(LDLIBS)

clean:
		rm -f ${PROGS} *.o
