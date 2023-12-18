#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>

int main() {
    printf("Números aleatorios con la primera semilla:\n");
    srand(time(0));
    for (int i = 0; i < 3; ++i) {
        printf("%d ", rand());
    }
}