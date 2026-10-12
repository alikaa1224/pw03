//nano pw03-6.c

#include <stdio.h>
int main(void) {
    char str[100];
    int width;
    scanf("%99s %d", str, &width);
    printf("%*s\n", width, str);
    printf("%-*s\n", width + 5, str);
    return 0;
}
//gcc pw03-6.c -o pw03-6
// ./pw03-6
