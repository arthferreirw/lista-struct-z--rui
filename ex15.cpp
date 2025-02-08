#include <iostream>

using namespace std;

struct Poligono {
    struct Ponto2D {
        int tam = 4;  // Tamanho fixo dos vetores
        
        float *Vetor1 = new float[tam];  // Alocação dinâmica para Vetor1
        float *Vetor2 = new float[tam];  // Alocação dinâmica para Vetor2

        // Construtor da struct Ponto2D para inicializar os vetores
        Ponto2D() {
            for (int i = 0; i < tam; ++i) {
                Vetor1[i] = 0.0;  // Inicializa Vetor1 com 0.0
                Vetor2[i] = 0.0;  // Inicializa Vetor2 com 0.0
            }
        }

        // Função para preencher os vetores
        void PreencherVetores() {
            for (int i = 0; i < tam; i++) {
                cout << "Vetor1[" << i << "]: ";
                cin >> Vetor1[i];  // Preenche Vetor1
                cout << "Vetor2[" << i << "]: ";
                cin >> Vetor2[i];  // Preenche Vetor2
            }
        }

        // Função para imprimir os vetores
        void ImprimirVetores() {
            // Imprime Vetor1
            cout << "Vetor1: (" << Vetor1[0] << ", " << Vetor1[1] << "), ("
                 << Vetor1[2] << ", " << Vetor1[3] << ")" << endl;
            // Imprime Vetor2
            cout << "Vetor2: (" << Vetor2[0] << ", " << Vetor2[1] << "), ("
                 << Vetor2[2] << ", " << Vetor2[3] << ")" << endl;
        }

        // Função para calcular o produto vetorial e verificar se o polígono é convexo
        void VerificarConvexidade() {
            if (tam != 4) {
                cout << "Número de pontos inválido para verificação de convexidade" << endl;
                return;
            }

            // Definir os vetores
            float x1 = Vetor1[0], y1 = Vetor1[1];
            float x2 = Vetor1[2], y2 = Vetor1[3];
            float x3 = Vetor2[0], y3 = Vetor2[1];
            float x4 = Vetor2[2], y4 = Vetor2[3];

            // Vetores formados pelos pontos consecutivos
            float v1x = x2 - x1;
            float v1y = y2 - y1;
            float v2x = x3 - x2;
            float v2y = y3 - y2;
            float v3x = x4 - x3;
            float v3y = y4 - y3;
            float v4x = x1 - x4;
            float v4y = y1 - y4;

            // Produtos vetoriais entre vetores consecutivos
            float produto1 = v1x * v2y - v1y * v2x;
            float produto2 = v2x * v3y - v2y * v3x;
            float produto3 = v3x * v4y - v3y * v4x;
            float produto4 = v4x * v1y - v4y * v1x;

            // Verifica os sinais dos produtos vetoriais
            bool positivo = (produto1 > 0 || produto2 > 0 || produto3 > 0 || produto4 > 0);
            bool negativo = (produto1 < 0 || produto2 < 0 || produto3 < 0 || produto4 < 0);

            if (positivo && negativo) {
                cout << "O polígono não é convexo" << endl;
            } else {
                cout << "O polígono é convexo" << endl;
            }
        }

        ~Ponto2D() {
            delete[] Vetor1;  // Libera a memória alocada para Vetor1
            delete[] Vetor2;  // Libera a memória alocada para Vetor2
        }
    };

    Ponto2D pontos;  // Instância de Ponto2D dentro de Poligono
};

int main() {
    Poligono poligono;

    // Preencher os vetores
    poligono.pontos.PreencherVetores();

    // Imprimir os vetores
    poligono.pontos.ImprimirVetores();

    // Verificar se o polígono é convexo
    poligono.pontos.VerificarConvexidade();

    return 0;
}