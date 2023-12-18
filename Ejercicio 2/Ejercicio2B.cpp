#include <cstring>
#include <cstdio>
int main() {
    char str[100];
    printf("Ingrese una cadena de caracteres: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

}
