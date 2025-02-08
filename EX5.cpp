#include <iostream>

using namespace std;

struct Circulo {
    float raio = 5;
    float pi = 3.14;
};

void AreaCirculo(Circulo &C) {
    float area = C.pi * (C.raio * C.raio);
    cout << "A area do circulo eh: " << area << endl;
}

void CalcularPerimetro(Circulo &C) {
    float perimetro = 2 * C.pi * C.raio;
    cout << "O perimetro do circulo eh: " << perimetro << endl;
}

int main() {
    Circulo C1;

    AreaCirculo(C1);  // Corrigido: Usar 'C' ao invés de 'C1'
    CalcularPerimetro(C1);  // Corrigido: Usar 'C' ao invés de 'C1'

    return 0;
}