#include <iostream>

int main() {
    int numero;

    std::cout << "Ingrese un numero: ";
    std::cin >> numero;

    if (numero % 2 == 0) {
        std::cout << "El numero ingresado es par." << std::endl;
    } else {
        std::cout << "El numero ingresado es impar." << std::endl;
    }

    return 0;
}

