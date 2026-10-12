//nano pw03-3.c

#include <stdio.h>
#include <string.h>
int main(void) {
    char name[50];
    int len;
    scanf("%49s", name);
    len = strlen(name);
    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    printf("\"%*s\"\n", len + 5, name);
    return 0;
}

//gcc pw03-3.c -o pw03-3
// ./pw03-3
