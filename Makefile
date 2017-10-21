all: rs c

rs:
	cd rs && cargo build --release

c: rs
	$(MAKE) -C c

clean:
	$(RM) -rf rs/target
	$(RM) -f c/client

.PHONY: all rs c clean
