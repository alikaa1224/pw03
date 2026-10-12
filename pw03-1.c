//mkdir pw03 && cd pw03
//nano pw03-1.c

#include <stdio.h>
#include <string.h>
int main(void){
  char latin[20] = "SibSUTIS";
    char cyr[20] = "СибГУТИ";
    printf("SIZEOF: %zu\n", sizeof(latin));
    printf("STRLEN: %zu\n", strlen(latin));
    printf("FREE_BYTES: %zu\n", sizeof(latin) - strlen(latin) - 1);
    printf("SIZEOF: %zu\n", sizeof(cyr));
    printf("STRLEN: %zu\n", strlen(cyr));
    printf("FREE_BYTES: %zu\n", sizeof(cyr) - strlen(cyr) - 1);
    return 0;
}

//gcc pw03-1.c -o pw03-1
// ./pw03-1
  
