//nano pw03-7.c

#include <stdio.h>
#include <string.h>
#define DISTRO "LinuxDistro"
int main(void) {
    const char RDATE[] = "2026";
    printf("DISTRO: %s\n", DISTRO);
    printf("RDATE: %s\n", RDATE);
    printf("STRLEN: %zu\n", strlen(DISTRO));
    printf("SIZEOF: %zu\n", sizeof(DISTRO));
    return 0;
}

//gcc pw03-7.c -o pw03-7
// ./pw03-7
