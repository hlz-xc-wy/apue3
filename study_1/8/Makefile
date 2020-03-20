
PROGS = 8_1 8_6 8_8 8_12 8_13  8_16 8_17

LDLIBS = -lapue

all:	$(PROGS)

%:	%.c $(LIBAPUE)
	$(CC) $(CFLAGS) $@.c -o $@ $(LDFLAGS) $(LDLIBS)

clean:
		rm -f ${PROGS} *.o
