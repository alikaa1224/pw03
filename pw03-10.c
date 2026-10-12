//nano 

#include <stdio.h>
#include <wchar.h>
#include <locale.h>
int main(void) {
    wchar_t m1[50], m2[50], m3[50];
    setlocale(LC_ALL, "");
    wscanf(L"%49ls", m1);
    wscanf(L"%49ls", m2);
    wscanf(L"%49ls", m3);
    wprintf(L"%-15ls|%20ls|%.5ls\n", m1, m2, m3);
    return 0;
}
//gcc pw03-10.c -o pw03-10
// ./pw03-10
