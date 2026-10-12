//nano pw03-8.c

#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
int main(void) {
    setlocale(LC_ALL, "");
    const char cstr[] = "Сбой матрицы";
    const wchar_t wstr[] = L"Сбой матрицы";
    wprintf(L"char -> sizeof: %zu bytes, strlen: %zu chars\n", sizeof(cstr), strlen(cstr));
    wprintf(L"wchar -> sizeof: %zu bytes, wcslen: %zu chars\n", sizeof(wstr), wcslen(wstr));
    return 0;
}

//gcc pw03-8.c -o pw03-8
// ./pw03-8
