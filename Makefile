
BIN = bin
CC = arduino --pref build.path=$(BIN)
INO = darkside/darkside.ino

all:

build: darkside/darkside.ino lib/*
	$(CC) --verify $(INO)

upload:
	$(CC) --upload $(INO)

edit:
	$(CC) $(INO)

clean:
	rm -rf $(BIN)
