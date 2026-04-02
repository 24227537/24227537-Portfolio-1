
#include <stdio.h>

int main(void) {
    int *ptr = NULL;

    printf("About to dereference a null pointer...\n");

    // System bug: dereferencing NULL
    int value = *ptr;

    printf("Value: %d\n", value);

    return 0;
}
