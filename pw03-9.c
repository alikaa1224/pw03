//nano pw03-9.c

#include <stdio.h>
#include <wchar.h>
#include <locale.h>
int main(void) {
    wchar_t callsign[50];
    setlocale(LC_ALL, "");
    wprintf(L"Введите позывной: ");
    if (wscanf(L"%49ls", callsign) == 1) {
        wprintf(L"Агент %ls авторизован в системе\n", callsign);
    }
    return 0;
}
//gcc pw03-9.c -o pw03-9
// ./pw03-9
