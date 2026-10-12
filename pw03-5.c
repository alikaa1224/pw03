//nano pw03-5.c

#include <stdio.h>
int main(void) {
    char c;
    scanf(" %c", &c);
    printf("CODE_DEC: %d\n", c);
    printf("CODE_HEX: %x\n", c);
    printf("CODE_OCT: %o\n", c);
    printf("UPPER: %c\n", (char)(c - 32));
    printf("NEXT: %c\n", (char)(c + 1));
    printf("PREV: %c\n", (char)(c - 1));
    return 0;
}
//gcc pw03-5.c -o pw03-5
// ./pw03-5
