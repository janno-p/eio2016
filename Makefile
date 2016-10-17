CC=g++
CFLAGS=-DEVAL -static -O2 -std=c++11

SRC_MEDALID=medalid/medalid
DEST_MEDALID=bin/medalid

medalid: $(SRC_MEDALID).cpp
	mkdir -p bin && \
	$(CC) $(CFLAGS) -o $(DEST_MEDALID) $(SRC_MEDALID).cpp && \
	cp $(SRC_MEDALID)sis.txt $(DEST_MEDALID)sis.txt && \
	cd bin && \
	./medalid

all: medalid

clean:
	rm -rf bin

.PHONY: all medalid clean
