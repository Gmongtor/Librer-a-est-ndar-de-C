#include <iostream>
#include <cstdlib>
int main() {
    int numeros[] = {-10, -5, 0, 5, 10};

    int cantidadNumeros = sizeof(numeros) / sizeof(numeros[0]);

    for (int i = 0; i < cantidadNumeros; ++i) {
        int num = numeros[i];
        int absNum = abs(num);
        std::cout << "El valor absoluto de " << num << " es " << absNum << std::endl;
    }
}
