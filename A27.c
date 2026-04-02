#include <stdio.h>
#include <string.h>

int main(void) {
    char buffer[8];

    printf("Enter some text: ");
    gets(buffer);   // Unsafe: vulnerable to buffer overflow

    printf("You entered: %s\n", buffer);

    return 0;
}
