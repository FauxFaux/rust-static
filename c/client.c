#include <stdint.h>
#include <stdio.h>
#include <inttypes.h>

extern uint32_t read_be_int();

int main() {
    printf("Hello, world!\n");
    uint32_t a = read_be_int();
    printf("It was a %" PRIu32 "!\n", a);
}

