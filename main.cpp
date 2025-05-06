#include <iostream>
#include <vector>
#include <cmath>

// Función que factoriza un número en sus factores primos
std::vector<int> factorizar(int n) {
    std::vector<int> factores;
    
    // Procesar divisiones por 2
    while (n % 2 == 0) {
        factores.push_back(2);
        n /= 2;
    }
    
    // Buscar factores impares
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            factores.push_back(i);
            n /= i;
        }
    }
    
    // Si n es un número primo mayor que 2
    if (n > 2) {
        factores.push_back(n);
    }
    
    return factores;
}

int main() {
    int numero;
    std::cout << "Ingrese un número para factorizar: ";
    std::cin >> numero;
    
    std::vector<int> factores = factorizar(numero);
    
    std::cout << "Los factores primos de " << numero << " son: ";
    for (int factor : factores) {
        std::cout << factor << " ";
    }
    std::cout << std::endl;
    
    return 0;
}