#include <iostream>
#include <cstdlib>
int main(){
    int numeros[] = {-10, -5, 0, 5, 10};

    int cantidadNumeros = sizeof(numeros) / sizeof(numeros[0]);

    for(int i = 0; i < cantidadNumeros; i++){
        std::cout << numeros[i] << std::endl;
    }
}