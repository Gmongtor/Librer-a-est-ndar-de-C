#include <cstring>
#include <cstdio>
int main() {
    char str[100];
    printf("Ingrese una cadena de caracteres: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    int length = strlen(str);
    printf("La longitud de '%s' es: %d\n", str, length);
    return 0;
}
