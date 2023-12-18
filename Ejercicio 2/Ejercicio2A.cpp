#include <iostream>
#include <cstring>
#include <cstdio>

int main() {
    char str1[] = "Hola me llamo Juan";
    char str2[] = "Hola mundo"
    char str3[] = "Hola me llamo Juan";

    int comparison1 = strcmp(str1, str2);
    int comparison2 = strcmp(str1, str3);
    if (comparison1 == 0) {
        printf("str1 y str2 son iguales.\n");
    } else {
        printf("str1 y str2 son diferentes.\n");
    }
    int comparison2 = strcmp(str1, str3);
    if (comparison2 == 0) {
        printf("str1 y str3 son iguales.\n");
    } else {
        printf("str1 y str3 son diferentes.\n");
    }
    return 0;
}