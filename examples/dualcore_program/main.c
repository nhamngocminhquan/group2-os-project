#include "uart.h"

int a = 1, b = 1;

int fib(int *a, int* b) {
    *a = *a + *b;
    *b = *a - *b;
}

// Main program for CPU 0
int main_0(void) {
    for (int i = 0; i < 10; i++) fib(&a, &b);
    while (1);
    return 0;
}

// Main program for CPU 1
int main_1(void) {
    while (1);
    return 0;
}

