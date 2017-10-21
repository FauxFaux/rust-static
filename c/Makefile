all: run

client: client.c
	$(CC) client.c -L../rs/target/release -lutilaux -ldl -lrt -lpthread -lgcc_s -lc -lm -oclient

run: client
	printf '\0\0\0\1' | ./client

.PHONY: all run
