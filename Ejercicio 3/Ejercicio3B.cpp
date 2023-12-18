#include <stdio.h>
int main() {
    FILE *file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para escritura.\n");
        return 1;
    }
    fprintf(file, "Hola, mundo!\n");

