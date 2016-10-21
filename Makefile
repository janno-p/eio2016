CC=g++
CFLAGS=-DEVAL -static -O2 -std=c++11

SRC_MEDALID=medalid/medalid
DEST_MEDALID=bin/medalid

SRC_JOON=joon/joon
DEST_JOON=bin/joon

SRC_MIL=mil/mil
DEST_MIL=bin/mil

SRC_FACT=fact/fact
DEST_FACT=bin/fact

all: medalid joon mil fact

medalid: $(SRC_MEDALID).cpp
	mkdir -p bin && \
	$(CC) $(CFLAGS) -o $(DEST_MEDALID) $(SRC_MEDALID).cpp && \
	cp $(SRC_MEDALID)sis.txt $(DEST_MEDALID)sis.txt && \
	cd bin && \
	./medalid

joon: $(SRC_JOON).cpp
	mkdir -p bin && \
	$(CC) $(CFLAGS) -o $(DEST_JOON) $(SRC_JOON).cpp && \
	cp $(SRC_JOON)sis.txt $(DEST_JOON)sis.txt && \
	cd bin && \
	./joon

mil: $(SRC_MIL).cpp
	mkdir -p bin && \
	$(CC) $(CFLAGS) -o $(DEST_MIL) $(SRC_MIL).cpp && \
	cp $(SRC_MIL)sis.txt $(DEST_MIL)sis.txt && \
	cd bin && \
	./mil

fact: $(SRC_FACT).cpp
	mkdir -p bin && \
	$(CC) $(CFLAGS) -o $(DEST_FACT) $(SRC_FACT).cpp && \
	cp $(SRC_FACT)sis.txt $(DEST_FACT)sis.txt && \
	cd bin && \
	./fact

clean:
	rm -rf bin

.PHONY: all medalid joon mil fact clean
