#include <stdint.h>
#include <stdio.h>
#include <inttypes.h>

extern uint32_t read_be_int();

int main() {
    printf("Hello, world!\n");
    int64_t a = read_be_int();
    if (a < 0) {
        fprintf(stderr, "Reading failed\n");
    } else {
        int32_t downcast = a;
        printf("It was a %" PRIu32 "!\n", downcast);
    }
}

