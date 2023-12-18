#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>

int main() {

    printf("Numeros aleatorios con la primera semilla:\n");
    srand(time(0));
    for (int i = 0; i < 3; ++i) {
        printf("%d ", rand());
    }
    printf("\n");

    time_t start_time = time(0);
    while(time(0) == start_time);
    printf("Numeros aleatorios con la segunda semilla:\n");
    srand(time(0));
    for (int i = 0; i < 3; ++i) {
        printf("%d ", rand());
    }
    printf("\n");

}