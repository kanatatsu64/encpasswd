BINDIR=/usr/local/bin

.PHONY: all clean

all: $(BINDIR)/encpasswd

$(BINDIR)/encpasswd: encpasswd.c
	$(CC) $< -lcrypt -o $@

clean:
	rm /usr/local/bin/encpasswd
